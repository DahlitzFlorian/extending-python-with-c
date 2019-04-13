# Extending Python with C


## Description

This repository contains a examples revealing how to extend Python with C code.
It's inspired by a [Medium article][mediumarticle] from [Matthias Bitzer][authorcredit] and the [Python Documentation][pythondocs].


## Usage

If you want to run the modules in Python, you can install them using the provided `setup.py`.
I recommend creating a virtual environment before installing them.


### Unix

```shell
$ python -m venv venv
$ source venv/bin/activate
```


### Windows

```shell
$ python -m venv venv
$ venv\bin\activate
```


### Installation

The following command will install the modules in the `site-packages` directory of your current environment.

```shell
$ python setup.py install
```

You can also *only* build the modules using:

```shell
$ python setup.py build
```

This creates a new directory called `build`.
Change your working directory to the one containing the `.so` libraries (`.dll` under Windows).
Creating a Python session in this directory gives you access to the modules even though they are not installed.


## Available Modules

| Module Name | Description |
|-------------|-------------|
| ccodemath | A collection of mathematical functions |


[authorcredit]: https://medium.com/@matthiasbitzer94
[mediumarticle]: https://medium.com/@matthiasbitzer94/how-to-extend-python-with-c-c-code-aa205417b2aa
[pythondocs]: https://docs.python.org/3/extending/extending.html#a-simple-example
