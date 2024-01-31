#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);

    int arr[n];
    int visitedArr[n];
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
   
   int count=0;;
   for (int i = 0; i < n; i++)
   {

     if (visitedArr[arr[i]]==1)
    {
        count++;
    }else{
        visitedArr[arr[i]]=1;
    }
   
    
   }

   printf("\nNumber of Duplicates Elements:%d\n",count);
   
   
    return 0;
}