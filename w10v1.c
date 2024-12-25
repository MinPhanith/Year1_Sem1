#include <stdio.h>

int main() {
    int A[5] = {10, 15, 20, 100, 30};
    int B[5]; 
    int i, j;

    
    for (i = 0, j = 4; i < 5; i++, j--) {
        B[j] = A[i];
    }

    
    printf("Original Array A: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Reversed Array B: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
