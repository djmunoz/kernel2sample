from distutils.core import setup, Extension
import numpy.distutils.misc_util


_chi2 = Extension('kernel2sample._chi2', ['c_src/_chi2.c','c_src/chi2.c'])
_other = Extension('kernel2sample._other', ['c_src/_other.c','c_src/chi2.c'])
                  
setup(
    packages =['kernel2sample'],
    ext_modules=[_chi2,_other],
    include_dirs=numpy.distutils.misc_util.get_numpy_include_dirs(),
)
