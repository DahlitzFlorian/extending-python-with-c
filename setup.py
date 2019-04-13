from setuptools import setup, Extension

ccodemath_module = Extension("ccodemath", sources=["ccodemath/ccodemath.c"])

setup(
    name="CMathExtension",
    version="1.0",
    description="A math package written in C.",
    ext_modules=[ccodemath_module],
)
