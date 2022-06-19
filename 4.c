#include <stdio.h>

// swap two numbers

int swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 6, b = 9;
    printf("Before a = %d and b = %d\n", a,b);
    swap(&a,&b);
    printf("After a = %d and b = %d\n", a,b);
}