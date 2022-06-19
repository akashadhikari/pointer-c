#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int A[20];
    // int *A = (int*)malloc(n*sizeof(int));
    for (int i = 0; i<n;i++) {
        A[i] = i+1;
    }
    for (int i = 0;i<n; i++) {
        printf("%d ", A[i]);
    }
}