// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ContGrid
arma::mat ContGrid(arma::mat const& xc, arma::mat const& xg, arma::vec const& y, arma::mat const& x2, arma::vec const& y2, arma::vec lamb1, arma::vec lamb2, arma::vec bc0, arma::vec bg0, double r, arma::mat const& a, int p, int pc, bool robust, char method, bool debugging);
RcppExport SEXP _regnet_ContGrid(SEXP xcSEXP, SEXP xgSEXP, SEXP ySEXP, SEXP x2SEXP, SEXP y2SEXP, SEXP lamb1SEXP, SEXP lamb2SEXP, SEXP bc0SEXP, SEXP bg0SEXP, SEXP rSEXP, SEXP aSEXP, SEXP pSEXP, SEXP pcSEXP, SEXP robustSEXP, SEXP methodSEXP, SEXP debuggingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type xc(xcSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type xg(xgSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lamb1(lamb1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lamb2(lamb2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bc0(bc0SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bg0(bg0SEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type pc(pcSEXP);
    Rcpp::traits::input_parameter< bool >::type robust(robustSEXP);
    Rcpp::traits::input_parameter< char >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type debugging(debuggingSEXP);
    rcpp_result_gen = Rcpp::wrap(ContGrid(xc, xg, y, x2, y2, lamb1, lamb2, bc0, bg0, r, a, p, pc, robust, method, debugging));
    return rcpp_result_gen;
END_RCPP
}
// LogitGrid
Rcpp::List LogitGrid(arma::mat const& x, arma::vec const& y, arma::mat const& x2, arma::vec const& y2, arma::vec const& lamb1, arma::vec const& lamb2, arma::vec b, double r, arma::mat const& a, int p, double alpha, char method);
RcppExport SEXP _regnet_LogitGrid(SEXP xSEXP, SEXP ySEXP, SEXP x2SEXP, SEXP y2SEXP, SEXP lamb1SEXP, SEXP lamb2SEXP, SEXP bSEXP, SEXP rSEXP, SEXP aSEXP, SEXP pSEXP, SEXP alphaSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type lamb1(lamb1SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type lamb2(lamb2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< char >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(LogitGrid(x, y, x2, y2, lamb1, lamb2, b, r, a, p, alpha, method));
    return rcpp_result_gen;
END_RCPP
}
// RunCont
arma::vec RunCont(arma::mat const& xc, arma::mat const& xg, arma::vec const& y, double lamb1, double lamb2, arma::vec bc, arma::vec bg, double r, arma::mat const& a, arma::vec const& triRowAbsSums, int p, int pc, char method);
RcppExport SEXP _regnet_RunCont(SEXP xcSEXP, SEXP xgSEXP, SEXP ySEXP, SEXP lamb1SEXP, SEXP lamb2SEXP, SEXP bcSEXP, SEXP bgSEXP, SEXP rSEXP, SEXP aSEXP, SEXP triRowAbsSumsSEXP, SEXP pSEXP, SEXP pcSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type xc(xcSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type xg(xgSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type lamb1(lamb1SEXP);
    Rcpp::traits::input_parameter< double >::type lamb2(lamb2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type a(aSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type triRowAbsSums(triRowAbsSumsSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type pc(pcSEXP);
    Rcpp::traits::input_parameter< char >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(RunCont(xc, xg, y, lamb1, lamb2, bc, bg, r, a, triRowAbsSums, p, pc, method));
    return rcpp_result_gen;
END_RCPP
}
// RunCont_robust
arma::vec RunCont_robust(arma::mat const& xc, arma::mat const& xg, arma::vec const& y, double lamb1, double lamb2, arma::vec bc, arma::vec bg, double r, arma::mat const& a, int p, int pc, char method, bool debugging);
RcppExport SEXP _regnet_RunCont_robust(SEXP xcSEXP, SEXP xgSEXP, SEXP ySEXP, SEXP lamb1SEXP, SEXP lamb2SEXP, SEXP bcSEXP, SEXP bgSEXP, SEXP rSEXP, SEXP aSEXP, SEXP pSEXP, SEXP pcSEXP, SEXP methodSEXP, SEXP debuggingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type xc(xcSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type xg(xgSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type lamb1(lamb1SEXP);
    Rcpp::traits::input_parameter< double >::type lamb2(lamb2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type pc(pcSEXP);
    Rcpp::traits::input_parameter< char >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type debugging(debuggingSEXP);
    rcpp_result_gen = Rcpp::wrap(RunCont_robust(xc, xg, y, lamb1, lamb2, bc, bg, r, a, p, pc, method, debugging));
    return rcpp_result_gen;
END_RCPP
}
// RunLogit
arma::vec RunLogit(arma::mat const& x, arma::vec const& y, double lamb1, double lamb2, arma::vec b, double r, arma::mat const& a, arma::vec const& triRowAbsSums, int p, double alpha, char method);
RcppExport SEXP _regnet_RunLogit(SEXP xSEXP, SEXP ySEXP, SEXP lamb1SEXP, SEXP lamb2SEXP, SEXP bSEXP, SEXP rSEXP, SEXP aSEXP, SEXP triRowAbsSumsSEXP, SEXP pSEXP, SEXP alphaSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type lamb1(lamb1SEXP);
    Rcpp::traits::input_parameter< double >::type lamb2(lamb2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type a(aSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type triRowAbsSums(triRowAbsSumsSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< char >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(RunLogit(x, y, lamb1, lamb2, b, r, a, triRowAbsSums, p, alpha, method));
    return rcpp_result_gen;
END_RCPP
}
// RunNet
arma::vec RunNet(arma::mat& x, arma::vec& y, double lamb1, double lamb2, arma::vec b, double r, arma::mat& a, int p);
RcppExport SEXP _regnet_RunNet(SEXP xSEXP, SEXP ySEXP, SEXP lamb1SEXP, SEXP lamb2SEXP, SEXP bSEXP, SEXP rSEXP, SEXP aSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type lamb1(lamb1SEXP);
    Rcpp::traits::input_parameter< double >::type lamb2(lamb2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(RunNet(x, y, lamb1, lamb2, b, r, a, p));
    return rcpp_result_gen;
END_RCPP
}
// RunMCP
arma::vec RunMCP(arma::mat& x, arma::vec& y, double lambda, arma::vec b, double r, int p);
RcppExport SEXP _regnet_RunMCP(SEXP xSEXP, SEXP ySEXP, SEXP lambdaSEXP, SEXP bSEXP, SEXP rSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(RunMCP(x, y, lambda, b, r, p));
    return rcpp_result_gen;
END_RCPP
}
// RunElastic
arma::vec RunElastic(arma::mat& x, arma::vec& y, double lambda, arma::vec b, double alpha, int p);
RcppExport SEXP _regnet_RunElastic(SEXP xSEXP, SEXP ySEXP, SEXP lambdaSEXP, SEXP bSEXP, SEXP alphaSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(RunElastic(x, y, lambda, b, alpha, p));
    return rcpp_result_gen;
END_RCPP
}
// RunSurv_robust
arma::vec RunSurv_robust(arma::mat const& xc, arma::mat const& xg, arma::vec const& y, double lamb1, double lamb2, arma::vec bc, arma::vec bg, double r, arma::mat const& a, int p, int pc, char method, bool debugging);
RcppExport SEXP _regnet_RunSurv_robust(SEXP xcSEXP, SEXP xgSEXP, SEXP ySEXP, SEXP lamb1SEXP, SEXP lamb2SEXP, SEXP bcSEXP, SEXP bgSEXP, SEXP rSEXP, SEXP aSEXP, SEXP pSEXP, SEXP pcSEXP, SEXP methodSEXP, SEXP debuggingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type xc(xcSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type xg(xgSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type lamb1(lamb1SEXP);
    Rcpp::traits::input_parameter< double >::type lamb2(lamb2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type pc(pcSEXP);
    Rcpp::traits::input_parameter< char >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type debugging(debuggingSEXP);
    rcpp_result_gen = Rcpp::wrap(RunSurv_robust(xc, xg, y, lamb1, lamb2, bc, bg, r, a, p, pc, method, debugging));
    return rcpp_result_gen;
END_RCPP
}
// RunSurv
arma::vec RunSurv(arma::mat const& xc, arma::mat const& xg, arma::vec const& y, double lamb1, double lamb2, arma::vec bc, arma::vec bg, double r, arma::mat const& a, arma::vec const& triRowAbsSums, int p, int pc, char method);
RcppExport SEXP _regnet_RunSurv(SEXP xcSEXP, SEXP xgSEXP, SEXP ySEXP, SEXP lamb1SEXP, SEXP lamb2SEXP, SEXP bcSEXP, SEXP bgSEXP, SEXP rSEXP, SEXP aSEXP, SEXP triRowAbsSumsSEXP, SEXP pSEXP, SEXP pcSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type xc(xcSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type xg(xgSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type lamb1(lamb1SEXP);
    Rcpp::traits::input_parameter< double >::type lamb2(lamb2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type a(aSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type triRowAbsSums(triRowAbsSumsSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type pc(pcSEXP);
    Rcpp::traits::input_parameter< char >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(RunSurv(xc, xg, y, lamb1, lamb2, bc, bg, r, a, triRowAbsSums, p, pc, method));
    return rcpp_result_gen;
END_RCPP
}
// SurvGrid
arma::mat SurvGrid(arma::mat const& xc, arma::mat const& xg, arma::vec const& y, arma::mat const& x2, arma::vec const& y2, arma::vec const& lamb1, arma::vec const& lamb2, arma::vec bc, arma::vec bg, double r, arma::mat const& a, int p, int pc, bool robust, char method, bool debugging);
RcppExport SEXP _regnet_SurvGrid(SEXP xcSEXP, SEXP xgSEXP, SEXP ySEXP, SEXP x2SEXP, SEXP y2SEXP, SEXP lamb1SEXP, SEXP lamb2SEXP, SEXP bcSEXP, SEXP bgSEXP, SEXP rSEXP, SEXP aSEXP, SEXP pSEXP, SEXP pcSEXP, SEXP robustSEXP, SEXP methodSEXP, SEXP debuggingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type xc(xcSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type xg(xgSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type y2(y2SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type lamb1(lamb1SEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type lamb2(lamb2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bc(bcSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type pc(pcSEXP);
    Rcpp::traits::input_parameter< bool >::type robust(robustSEXP);
    Rcpp::traits::input_parameter< char >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type debugging(debuggingSEXP);
    rcpp_result_gen = Rcpp::wrap(SurvGrid(xc, xg, y, x2, y2, lamb1, lamb2, bc, bg, r, a, p, pc, robust, method, debugging));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_regnet_ContGrid", (DL_FUNC) &_regnet_ContGrid, 16},
    {"_regnet_LogitGrid", (DL_FUNC) &_regnet_LogitGrid, 12},
    {"_regnet_RunCont", (DL_FUNC) &_regnet_RunCont, 13},
    {"_regnet_RunCont_robust", (DL_FUNC) &_regnet_RunCont_robust, 13},
    {"_regnet_RunLogit", (DL_FUNC) &_regnet_RunLogit, 11},
    {"_regnet_RunNet", (DL_FUNC) &_regnet_RunNet, 8},
    {"_regnet_RunMCP", (DL_FUNC) &_regnet_RunMCP, 6},
    {"_regnet_RunElastic", (DL_FUNC) &_regnet_RunElastic, 6},
    {"_regnet_RunSurv_robust", (DL_FUNC) &_regnet_RunSurv_robust, 13},
    {"_regnet_RunSurv", (DL_FUNC) &_regnet_RunSurv, 13},
    {"_regnet_SurvGrid", (DL_FUNC) &_regnet_SurvGrid, 16},
    {NULL, NULL, 0}
};

RcppExport void R_init_regnet(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
