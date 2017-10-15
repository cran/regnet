#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP regnet_RunElastic(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP regnet_RunMCP(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP regnet_RunNet(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"regnet_RunElastic", (DL_FUNC) &regnet_RunElastic, 7},
    {"regnet_RunMCP",     (DL_FUNC) &regnet_RunMCP,     7},
    {"regnet_RunNet",     (DL_FUNC) &regnet_RunNet,     9},
    {NULL, NULL, 0}
};

void R_init_regnet(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
