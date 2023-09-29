// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// function_test
int function_test(int c);
RcppExport SEXP _thresholding_function_test(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(function_test(c));
    return rcpp_result_gen;
END_RCPP
}
// print_vector
void print_vector(int i);
RcppExport SEXP _thresholding_print_vector(SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    print_vector(i);
    return R_NilValue;
END_RCPP
}
// help
void help();
RcppExport SEXP _thresholding_help() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    help();
    return R_NilValue;
END_RCPP
}
// thresholdAnalysis
void thresholdAnalysis(std::string infile, std::string outfile_prefix, std::string methods, double lower, double upper, double increment, int window_size, int min_partition_size, int min_clique_size, double min_alpha, double max_alpha, double alpha_increment, int num_samples, double significance_alpha, bool bonferroni_corrected);
RcppExport SEXP _thresholding_thresholdAnalysis(SEXP infileSEXP, SEXP outfile_prefixSEXP, SEXP methodsSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP incrementSEXP, SEXP window_sizeSEXP, SEXP min_partition_sizeSEXP, SEXP min_clique_sizeSEXP, SEXP min_alphaSEXP, SEXP max_alphaSEXP, SEXP alpha_incrementSEXP, SEXP num_samplesSEXP, SEXP significance_alphaSEXP, SEXP bonferroni_correctedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type infile(infileSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfile_prefix(outfile_prefixSEXP);
    Rcpp::traits::input_parameter< std::string >::type methods(methodsSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< double >::type increment(incrementSEXP);
    Rcpp::traits::input_parameter< int >::type window_size(window_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type min_partition_size(min_partition_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type min_clique_size(min_clique_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type min_alpha(min_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type max_alpha(max_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_increment(alpha_incrementSEXP);
    Rcpp::traits::input_parameter< int >::type num_samples(num_samplesSEXP);
    Rcpp::traits::input_parameter< double >::type significance_alpha(significance_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type bonferroni_corrected(bonferroni_correctedSEXP);
    thresholdAnalysis(infile, outfile_prefix, methods, lower, upper, increment, window_size, min_partition_size, min_clique_size, min_alpha, max_alpha, alpha_increment, num_samples, significance_alpha, bonferroni_corrected);
    return R_NilValue;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _thresholding_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_thresholding_function_test", (DL_FUNC) &_thresholding_function_test, 1},
    {"_thresholding_print_vector", (DL_FUNC) &_thresholding_print_vector, 1},
    {"_thresholding_help", (DL_FUNC) &_thresholding_help, 0},
    {"_thresholding_thresholdAnalysis", (DL_FUNC) &_thresholding_thresholdAnalysis, 15},
    {"_thresholding_rcpp_hello_world", (DL_FUNC) &_thresholding_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_thresholding(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
