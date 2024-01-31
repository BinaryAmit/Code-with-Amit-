#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Araay elements:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int originalSum = (n * (n + 1)) / 2;
    int duplicateElement = originalSum - sum;
    printf("Duplicate Element:%d\n", duplicateElement);

    return 0;
}