#include <stdio.h>

void bubbleSort(int A[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {          // number of passes
        for (j = 0; j < n - i - 1; j++) {  // comparisons in each pass
            if (A[j] > A[j + 1]) {         // swap if out of order
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main() {
    int A[] = {5, 1, 4, 2, 8};
    int n = 5;

    bubbleSort(A, n);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
