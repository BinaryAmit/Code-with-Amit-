// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main() {


    int *arr;
    int n;

    printf("Enter arr size \n");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        arr[i]=i+1;
    }

    for(int i=0; i<n; i++) {
        printf("value of index %d of array :",i);
        printf("%d\n",arr[i]);
    }
    free(arr);
    printf("\n\n\n");
    arr=(int*)realloc(arr,2*sizeof(int));

    for  (int i=0; i<n; i++)
    {
        arr[i]=i+10;
    }

    for(int i=0; i<n; i++) {
        printf("value of index %d of array :",i);
        printf("%d\n",arr[i]);
    }

    return 0;
}