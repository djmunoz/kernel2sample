/*
 *Kernel 2-sample test (Grotton et al 2012)

 *C-extension

 */


#include <Python.h>
#include <numpy/arrayobject.h>
#include <math.h>

static PyObject kernel_statistic




/* ==== Set up the methods table ====================== */
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
