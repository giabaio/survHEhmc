
#' @title .onAttach
#' @description prints out a friendly reminder message to the user
#' @inheritParams base .onAttach
#' @return NULL
#' @noRd
.onAttach <- function(libname, pkgname) {
  packageStartupMessage("The survHEhmc version loaded is: ", utils::packageVersion("survHEhmc"))
}

#' Package imports and registration
#'
#' @name package_imports
#' @noRd
#' @import Rcpp
#' @import dplyr
#' @import survHE
#' @import rstantools
#' @import methods
#' @importFrom rstan sampling
#' @importFrom stats dgamma median model.frame model.matrix pexp pgamma plnorm pweibull quantile time update var
#' @importFrom flexsurv hexp dgenf pgenf dgengamma pgengamma hgompertz pgompertz hllogis pllogis hlnorm hweibull hweibullPH pweibullPH
#' @importFrom tibble rownames_to_column
#' @useDynLib survHEhmc, .registration = TRUE
NULL
