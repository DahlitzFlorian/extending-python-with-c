#define PY_SSIZE_T_CLEAN  /* Make "s#" use Py_ssize_t rather than int. */
#include <Python.h>


int fastfactorial(int n){
    if(n <= 1)
        return 1;
    else
        return n * fastfactorial(n - 1);
}

static PyObject*
factorial(PyObject* self, PyObject* args) {
    int n;

    if (!PyArg_ParseTuple(args, "i", &n))
        return NULL;

    int result = fastfactorial(n);

    return Py_BuildValue("i", result);
}

static PyMethodDef mainMethods[] = {
    {"factorial", factorial, METH_VARARGS, "Calculate the factorial of n"},
    {NULL, NULL, 0, NULL}
};

static PyModuleDef ccodemath = {
    PyModuleDef_HEAD_INIT,
    "ccodemath",
    "Factorial Calculation",
    -1,
    mainMethods
};

PyMODINIT_FUNC PyInit_ccodemath(void){
    return PyModule_Create(&ccodemath);
}
