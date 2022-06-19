#include <stdio.h>

int swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main() {
    int a = 4;
    int b = 6;
    printf("Before: a = %d and b = %d\n", a,b);
    swap(4,6);
    printf("After: a = %d and b = %d\n", a,b);
}