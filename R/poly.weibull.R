#' Fit Poly-Weibull model for survival analysis of mixture hazards
#'
#' Runs the survival analysis using a Poly-Weibull model
#'
#' On object in the class \code{survHE} containing the following elements
#'
#' @param formula a list of formulae (one for each components of the mixture.
#' Can specify one single formula (in which case, the model is a simple Weibull
#' regression). For example, a valid call is using
#' \code{formula=list(Surv(time,event)~1,Surv(time,event)~arm)}
#' @param data A data frame containing the data to be used for the analysis.
#' This must contain data for the 'event' variable. In case there is no
#' censoring, then \code{event} is a column of 1s.
#' @param \dots Additional options (for INLA or HMC).
#'
#' **HMC** specific options \code{chains} = number of chains to run in the HMC
#' (default = 2) \code{iter} = total number of iterations (default = 2000)
#' \code{warmup} = number of warmup iterations (default = iter/2) \code{thin} =
#' number of thinning (default = 1) \code{control} = a list specifying
#' Stan-related options, eg \code{control=list(adapt_delta=0.85)} (default =
#' NULL) \code{seed} = the random seed (to make things replicable) \code{pars}
#' = a vector of parameters (string, default = NA) \code{include} = a logical
#' indicator (if FALSE, then the pars are not saved; default = TRUE)
#' \code{priors} = a list (of lists) specifying the values for the parameters
#' of the prior distributions in the models \code{save.stan} = a logical
#' indicator (default = FALSE). If TRUE, then saves the data list for Stan and
#' the model file(s)
#' @return \item{models}{ A list containing the fitted models. These contain
#' the output from the original inference engine (\code{flexsurv}, \code{INLA}
#' or \code{rstan}). Can be processed using the methods specific to the
#' original packages, or via \code{survHE}-specific methods (such as
#' \code{plot}, \code{print}) or other specialised functions (eg to extrapolate
#' the survival curves, etc). } \item{model.fitting}{ A list containing the
#' output of the model-fit statistics (AIC, BIC, DIC). The AIC and BIC are
#' estimated for all methods, while the DIC is only estimated when using
#' Bayesian inference. } \item{method}{ A string indicating the method used to
#' fit the model, ie \code{'mle'}, \code{'inla'} or \code{'hmc'}.  }
#' \item{misc}{ A list containing the time needed to run the model(s) (in
#' seconds), the formula used, the results of the Kaplan-Meier analysis (which
#' is automatically performed using \code{npsurv}) and the original data frame.
#' }
#' @note Something will go here
#' @author Gianluca Baio
#' @seealso \code{fit.models}, \code{make.surv}
#' @template refs
#' @keywords Parametric survival models Bayesian inference via Hamiltonian
#' Monte Carlo Poly-Weibull model
#' @examples
#' \dontrun{
#' }
#'
#' #See Baio (2019) for extended example
#'
#' @export poly.weibull
poly.weibull <- function(formula=NULL,data,...) {
  # Fits the PolyWeibull model of Demiris et al (2015), SMMR 24(2), 287-301 to the data
  #
  # formula = a list of formulae to be used for each of the M components of the model
  # data = a data.frame containing the data
  # ... = optional arguments
  # chains = number of chains to run in the HMC (default = 2)
  # iter = total number of iterations (default = 2000)
  # warmup = number of warmup iterations (default = iter/2)
  # thin = number of thinning (default = 1)
  # control = a list specifying Stan-related options, eg control=list(adapt_delta=0.85) (default = NULL)
  # seed = the random seed (to make things replicable)
  # pars = a vector of parameters (string, default = NA)
  # include = a logical indicator (if FALSE, then the pars are not saved; default = TRUE)
  # cores = the number of CPU (cores) used to run the sampling procedure using rstan (default = 1)
  # priors = a list (of lists) specifying the values for the parameters of the prior distributions in the models
  # save.stan = a logical indicator (default = FALSE). If TRUE, then saves the data list for Stan and the model file(s)


  # This requires rstan, so if it's not installed asks for it!
  if(!isTRUE(requireNamespace("rstan",quietly=TRUE))) {
    stop("You need to install the R package 'rstan'. Please run in your R terminal:\n install.packages('rstan')")
  }
  distr="polyweibull"

  # Optional arguments
  exArgs <- list(...)

  # # Avoids issues with visible binding
  # utils::globalVariables(names=c("event","."),package="survHE",add=FALSE)

  # Sets up defaults

  # Check whether the user has specified a list of formulae to be used in each compoenent of the model
  if (!is.null(formula)) {
    # a. The user has specified a formula, but has only given 1 element, then expand it
    #    so that formula becomes a list of formulae and sets up 2 components by default
    if (inherits(formula,"formula")) {
      formula <- list(formula)
    }
    M <- length(formula)
    if(length(formula)<2){
      stop("Please speficy at least 2 components for the Poly-Weibull model by creating\n  a list of at least two formulae, eg: 'list(Surv(time,event)~1,Surv(time,event)~treatment)'")
    }
  }

  ## Stan options (the defaults are set in line with Stan's original)
  nlist <- NULL
  if(exists("chains",where=exArgs)) {chains <- exArgs$chains} else {chains <- 2} # DO WE WANT 4???
  if(exists("iter",where=exArgs)) {iter <- exArgs$iter} else {iter <- 2000}
  if(exists("warmup",where=exArgs)) {warmup <- exArgs$warmup} else {warmup <- floor(iter/2)}
  if(exists("thin",where=exArgs)) {thin <- exArgs$thin} else {thin <- 1}
  if(exists("control",where=exArgs)) {control <- exArgs$control} else {control <- NULL}
  if(exists("seed",where=exArgs)) {seed <- exArgs$seed} else {seed <- sample.int(.Machine$integer.max, 1)}
  if(exists("pars",where=exArgs)) {pars <- exArgs$pars} else {
    pars <- c("loglambda","lambda","lp__")
  }
  if(exists("include",where=exArgs)) {include <- exArgs$include} else {include <- FALSE}
  if(exists("init",where = exArgs)) {init <- exArgs$init} else {init="random"}
  if(exists("cores",where=exArgs)) {cores <- exArgs$cores} else {cores <- 1}
  if(exists("save.stan",where=exArgs)) {save.stan <- exArgs$save.stan} else {save.stan=FALSE}

  # Loads in the available models in each method
  availables <- survHE:::load_availables()
  # Uses the helper 'manipulated_distributions' to create the vectors distr, distr3 and labs
  d3 <- survHE:::manipulate_distributions(distr)$distr3
  method <- "hmc"

  # Recomputes the three-letters code for the distributions and the HMC-specific name
  d <- names(availables[[method]][match(d3, availables[[method]])])

  # Loads the pre-compiled models
  dso <- stanmodels[[d]]

  # Creates the data list for the first formula (mixture component)
  data.stan <- make_data_stan(formula[[1]],data,d3,exArgs)
  # Adds other elements specific to the Poly-Weibull model
  data.stan$M <- M
  # And the data for the other mixture components (into an array)
  X=lapply(formula,function(i) make_data_stan(i,data,d3,exArgs)$X)
  # Maximum number of covariates
  data.stan$H=max(unlist(lapply(X,function(i) ncol(i))))
  # Fills the array in the data list with the covariates matrices
  data.stan$X=array(0,dim=c(data.stan$M,data.stan$n,data.stan$H))
  for (m in 1:length(formula)) {
    data.stan$X[m,,1:ncol(X[[m]])]=X[[m]]
  }
  data.stan$mu_beta <- matrix(0,nrow=data.stan$H,ncol=data.stan$M)
  data.stan$sigma_beta <- matrix(10,data.stan$H,data.stan$M)

  # Now runs Stan to sample from the posterior distributions
  tic <- proc.time()
  model <- rstan::sampling(dso,data.stan,chains=chains,iter=iter,warmup=warmup,thin=thin,seed=seed,
                           control=control,pars=pars,include=include,cores=cores,init=init)
  toc <- proc.time()-tic
  time_survHE <- toc[3]
  # rstan does have its way of computing the running time, but it may not be the actual one when running multiple
  # chains.
  time_stan <- sum(rstan::get_elapsed_time(model))

  # Uses the helper function to compute the *IC
  #### NB: THIS WILL NEED TO BE A LIST
  ics <- compute_ICs_stan(model,d3,data.stan)

  # If 'save.stan' is set to TRUE, then saves the Stan model file(s) & data
  if(save.stan) {
    model_code <- attr(model@stanmodel,"model_code")
    con <- paste0(d,".stan")
    writeLines(model_code,con=con)
    cat(paste0("Model code saved to the file: ",con,"\n"))
  }

  # Adds a field used in 'make.surv' to indicate the model used
  model_name <- d3

  # Finally returns the output
  output=list(list(
    model=model,
    aic=ics$aic,
    bic=ics$bic,
    dic=ics$dic,
    dic=ics$dic2,
    time2run=pmin(time_survHE,time_stan),
    data.stan=data.stan,
    save.stan=save.stan,
    model_name=model_name
  ))

  # And formats it as a 'survHE' object
  res=survHE:::format_output_fit.models(output,method,distr,formula,data)
  return(res)
}
