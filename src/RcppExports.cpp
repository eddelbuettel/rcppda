// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppDA.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// module_a_func0
bool module_a_func0();
RcppExport SEXP _RcppDA_module_a_func0() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(module_a_func0());
    return rcpp_result_gen;
END_RCPP
}
// module_a_func1
bool module_a_func1();
RcppExport SEXP _RcppDA_module_a_func1() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(module_a_func1());
    return rcpp_result_gen;
END_RCPP
}
// module_a_func1b
bool module_a_func1b();
RcppExport SEXP _RcppDA_module_a_func1b() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(module_a_func1b());
    return rcpp_result_gen;
END_RCPP
}
// module_a_func2
bool module_a_func2();
RcppExport SEXP _RcppDA_module_a_func2() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(module_a_func2());
    return rcpp_result_gen;
END_RCPP
}
// module_a_func3
bool module_a_func3();
RcppExport SEXP _RcppDA_module_a_func3() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(module_a_func3());
    return rcpp_result_gen;
END_RCPP
}
// module_a_func4
bool module_a_func4();
RcppExport SEXP _RcppDA_module_a_func4() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(module_a_func4());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppDA_module_a_func0", (DL_FUNC) &_RcppDA_module_a_func0, 0},
    {"_RcppDA_module_a_func1", (DL_FUNC) &_RcppDA_module_a_func1, 0},
    {"_RcppDA_module_a_func1b", (DL_FUNC) &_RcppDA_module_a_func1b, 0},
    {"_RcppDA_module_a_func2", (DL_FUNC) &_RcppDA_module_a_func2, 0},
    {"_RcppDA_module_a_func3", (DL_FUNC) &_RcppDA_module_a_func3, 0},
    {"_RcppDA_module_a_func4", (DL_FUNC) &_RcppDA_module_a_func4, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppDA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
