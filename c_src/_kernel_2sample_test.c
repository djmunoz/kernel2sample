/*
 *Kernel 2-sample test (Gretton et al 2012)

 *C-extension

 */
#include <Python.h>
#include <numpy/arrayobject.h>
#include <math.h>

static char module_docstring[] =
    "This module provides an interface for calculating chi-squared using C.";
static char kernel_docstring[] =
    "Calculate the chi-squared of some data given a model.";



static PyObject kernel_statistic




/* ==== Set up the methods table ====================== */
Static PyMethodDef module_methods[] = {
    {"chi2", chi2_chi2, METH_VARARGS, chi2_docstring},
    {NULL, NULL, 0, NULL}
};


static PyMethodDef _C_arraytestMethods[] = {
    {"vecfcn1", vecfcn1, METH_VARARGS},
    {"vecsq", vecsq, METH_VARARGS},
    {"rowx2", rowx2, METH_VARARGS},
    {"rowx2_v2", rowx2_v2, METH_VARARGS},
    {"matsq", matsq, METH_VARARGS},
    {"contigmat", contigmat, METH_VARARGS},
    {"intfcn1", intfcn1, METH_VARARGS},
    {NULL, NULL}     /* Sentinel - marks the end of this structure */
};
