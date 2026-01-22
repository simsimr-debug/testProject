#include <stdio.h>

int main() {
    int i, k;
    int inputArray[4];  // Declare an array to store 4 integers

    // Input numbers into the array
    for (i = 0; i < 4; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &k);
        inputArray[i] = k;  // Store the input in the array
    }

    // Print the numbers from the array
    for (i = 0; i < 4; i++) {
        printf("%d\n", inputArray[i]);  // Print each element of the array
    }

    return 0;  // Return 0 to indicate successful execution
}