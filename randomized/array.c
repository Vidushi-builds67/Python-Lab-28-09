#include <stdio.h>

// Making and printing Array
int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int A[n];
    int new_A[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d in Array A: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Unsorted Array: \n");

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    // Sorting Array by Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;

        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j + 1];
                A[j + 1] = A[j];
                A[j] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
    }

    printf("\nSorted Array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}