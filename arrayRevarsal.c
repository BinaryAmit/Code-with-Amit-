#include <stdio.h>

void arrayRevarsal(int size, int a[size])
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    arrayRevarsal(size, arr);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}