
/* File : example.c */
#include "example.h"
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

double my_multiply(double x, double y){
 return x*y;
}

My_class::My_class(){

}
int My_class::add(int a, int b){
    return a+b;
}
