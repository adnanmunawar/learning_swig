/* File : example.i */
%module example
%{
#include "example.h"
    extern double My_variable;
    extern double *My_double;
    extern int My_int[3];
%}

extern double My_variable;
extern double *My_double;
extern int My_int[3];
#include "example.h"
