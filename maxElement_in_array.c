#include <stdio.h>

int findMax(int array[], int n)
{
    if (n <= 0)
    {
        // Handle the case when the array is empty
        printf("Error: Array is empty.\n");
        return -1; // Return a sentinel value indicating an error
    }

    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}

int main()
{
    int arr[] = {16, 12, 3, 5455, 5, 67, 654};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);

    if (max != -1)
    {
        printf("The maximum element in this array is %d\n", max);

        // // Print the elements of the array
        // printf("Array elements:\n");
        // for (int i = 0; i < size; i++) {
        //     printf("Element %d: %d\n", i, arr[i]);
        // }
    }

    return 0;
}
