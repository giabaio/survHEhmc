#' This defines variables, mainly used with 'dplyr' and pipes that
#' throw a 'no visible binding for global variable' during
#' 'R CMD check' (before CRAN submission)
#'
#' @noRd
utils::globalVariables(names=c("event","."),add=FALSE)

#' @title .onAttach
#' @description prints out a friendly reminder message to the user
#' @inheritParams base .onAttach
#' @return NULL
#' @noRd
.onAttach <- function(libname, pkgname) {
  packageStartupMessage("The survHEhmc version loaded is: ", utils::packageVersion("survHEhmc"))
}
