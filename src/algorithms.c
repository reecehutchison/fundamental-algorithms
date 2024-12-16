#include "../include/algorithms.h"

// exercise 1. (page 11)
// the function swaps two values
void swap(int* a, int* b) {
    int tmp=*a;
    *a=*b; 
    *b=tmp;
    return; 
}
