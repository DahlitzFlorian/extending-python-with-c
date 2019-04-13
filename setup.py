from setuptools import setup, Extension

cmath_module = Extension("cmath", sources=["cmath/cmathmodule.c"])

setup(
    name="CMathExtension",
    version="1.0",
    description="A math package written in C.",
    ext_modules=[cmath_module],
)
