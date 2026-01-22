#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int n, int key) {
    int low = 0;             // starting index
    int high = n - 1;        // ending index

    while (low <= high) {
        int mid = (low + high) / 2;   // find the middle index

        if (arr[mid] == key) {
            return mid;                // key found at index mid
        }
        else if (arr[mid] < key) {
            low = mid + 1;             // search in the right half
        }
        else {
            high = mid - 1;            // search in the left half
        }
    }

    return -1;  // if key not found
}

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element found at position %d (index %d)\n", result + 1, result);
    else
        printf("Element not found in the array.\n");

    return 0;
}
