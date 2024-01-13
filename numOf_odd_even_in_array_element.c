#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evencount = 0;
    int oddcount = 0;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("%d %d", evencount, oddcount);
    return 0;
}