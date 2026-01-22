#include <stdio.h>

void insertionSort(int A[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = A[i];
        j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }

        A[j + 1] = key;   // Insert the key in the correct position
    }
}

int main() {
    int A[] = {12, 11, 13, 5, 6};
    int n = 5;

    insertionSort(A, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
