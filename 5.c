#include <stdio.h>

int main() {
    int a[] = {3,7,11,13};
    int *p;
    p = &a[0];
    printf("Value %d", a);
}

// p, a, a[0], *a+2, &a[0]