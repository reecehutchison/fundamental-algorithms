#include <stdio.h>
#include "../include/algorithms.h"

int main() {

    int x=3; 
    int y=4; 

    printf("Before Swap \n");
    printf("    x: %d", x);
    printf("    y: %d\n\n", y);

    swap(&x, &y);

    printf("After Swap \n");
    printf("    x: %d", x);
    printf("    y: %d\n", y);

    return 0;
}
