#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int size) {
    if (size <= 1) {
        // An array with 0 or 1 element is always considered sorted
        return true;
    }

    // Check if each element is less than or equal to the next one
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false; // Array is not sorted
        }
    }

    return true; // Array is sorted
}

int main() {
    int sortedArray[] = {1, 2, 3, 4, 5};
    int unsortedArray[] = {7, 3, 1, 8, 4};

    int sortedSize = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int unsortedSize = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

    bool isSortedSorted = isSorted(sortedArray, sortedSize);
    bool isSortedUnsorted = isSorted(unsortedArray, unsortedSize);

    printf("Is the sortedArray sorted? %s\n", isSortedSorted ? "Yes" : "No");
    printf("Is the unsortedArray sorted? %s\n", isSortedUnsorted ? "Yes" : "No");

    return 0;
}