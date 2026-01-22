#include <stdio.h>

void selectionSort(int A[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }

        // swap
        temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }
}

int main() {
    int A[] = {64, 25, 12, 22, 11};
    int n = 5;

    selectionSort(A, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
