#include <stdio.h>

/* Function that performs linear search.
   Returns the index (0-based) if key is found, otherwise returns -1. */
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {    // 1. Check each array element from 0 to n-1
        if (arr[i] == key) {        // 2. If current element equals key...
            return i;               // 3. ...return the index where it was found
        }
    }
    return -1;                       // 4. If loop finishes, key wasn't found
}

int main() {
    int n, key;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];                       // 5. Create an array with n elements (C99 variable-length)

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);         // 6. Read each element into arr[i]
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);                // 7. Read the key to search for

    int result = linearSearch(arr, n, key);  // 8. Call the search function

    if (result != -1) {
        printf("Element found at position %d (0-based index %d)\n", result + 1, result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
