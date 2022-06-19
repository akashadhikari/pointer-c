#include <stdio.h>

int main() {
    int a=10;
    int *p;
    p = &a;
    printf("The address of p = %d\n", p);
    printf("The dereferenced value of p = %d\n", *p);
}

// pointers
// pointer arithmetic
// pointer to pointer