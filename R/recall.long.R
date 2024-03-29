#' The Repeated-Measures Data: Long Data Format
#'
#' A data frame that is in the long format. A hypothetical experiment is designed to
#' measure effects of study time in a free-recall paradigm. In this hypothetical experiment,
#' to-be-recalled 20-word lists are presented at a rate of 1, 2, or 5 sec per word.
#' Of interest is the relation between study time and number of recalled list words.
#' Suppose that the experiment is run as a within-subject (repeated-measures) design,
#' including a total of 10 subjects, each of whom participated in all three study-time conditions.
#'
#' @format A data frame with 30 rows and 3 variables:
#' \describe{
#'   \item{Subject}{The factor containing 10 levels of subjects, \code{"s1"} to \code{"s10"}.}
#'   \item{Level}{The factor containing three levels of the experimental manipulation, \code{"Level1"}, \code{"Level2"}, and \code{"Level3"}.}
#'   \item{Response}{The number of words recalled out of 20 for each of 10 subjects in each of three conditions.}
#' }
#' @references Loftus, G. R., & Masson, M. E. J. (1994). Using confidence intervals in within-subject designs. Psychonomic Bulletin & Review, 1, 476–490.
"recall.long"
