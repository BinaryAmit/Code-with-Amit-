#include<stdio.h>
    void swap(int*ptr1,int*ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;}
int main()
{
    int num1,num2;
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    
   // int *ptr1=&num1;
   // int *ptr2=&num2;
   // swap(*ptr1,*ptr2);
   swap(&num1,&num2);
    
    printf("%d %d",num1,num2);
    return 0;
}