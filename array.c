#include<stdio.h>

int main()
{  int arr[4];
   // arr[4]={23,56,67,78};




 for(int i=0;i<4;i++){

   printf("Enter the value of %d element of array\n",i);
  scanf("%d",&arr[i]);
    }


    for(int i=0;i<4;i++){

    printf("the element of %d index of array is %d\n",i,arr[i]);
    
    }
    return 0;
}