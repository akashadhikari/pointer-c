#include <stdio.h>

int graceMarks(int a) {
    a = a+1;
    return a;
}

int main() {
    int a = 7;
    graceMarks(a);
    printf("Result = %d\n", a);
}

// by value
// by reference