
/* File : example.c */
#include "example.h"

double My_variable = 3.0;
double *My_double;
int My_int[3];
/* Compute factorial of n */
int fact(int n) {
    if (n <= 1)
        return 1;
    else
        return n*fact(n-1);
}

/* Compute n mod m */
int my_mod(int n, int m) {
    return(n % m);
}

My_class::My_class(){
    
}
int My_class::add(int a, int b){
    return a+b;
}
