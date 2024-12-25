 #include <stdio.h>

#define SIZE 10 // Define the size of the array

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initialize array
    int i;

    // Display original array
    printf("Original Array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Set odd-indexed elements to -1
    for (i = 1; i < SIZE; i += 2) {
        arr[i] = -1;
    }

    // Display modified array
    printf("Modified Array: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

