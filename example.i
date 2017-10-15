/* File : example.i */
%module example
%{
#include "example.h"
    extern double My_variable;
%}

extern double My_variable;
#include "example.h"
