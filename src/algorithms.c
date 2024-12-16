#include "../include/algorithms.h"

// exercise 1. (page 9)
// swaps two values.
void swap(int* a, int* b) {
    int tmp=*a;
    *a=*b; 
    *b=tmp;
    return; 
}

// euclids algorithm (page 2)
// finds greatest common divisor between two positive integers.
int euclids_algorithm(int m, int n) {
    int r=m%n; 
    while(r!=0) {
        m=n; 
        n=r; 
        r=m%n; 
    }
    return n; 
}
