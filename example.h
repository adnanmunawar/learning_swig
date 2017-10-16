#ifndef EXAMPLE_H
#define EXAMPLE_H
#include "my_math.h"

class My_class{
public:
    My_class();

    int add(int a, int b);

    double My_variable = 3.0;
    double *My_double;
    int My_int[3];
    char* add_char(char * val); 
};

int fact(int n);
int my_mod(int n, int m);
#endif
