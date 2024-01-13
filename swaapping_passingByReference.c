#include<stdio.h>


int swap(int *x,int *y) {
   // int c;
   // int d;
   *x=*x+*y;
   
   
    *y=*x-*y-*y;
   // *x=c;
   // *y=d;
    return 0;
}
int main()
{   int a,b;
    a=7;
    b=3;
    printf("the value of a and b is %d and %d\n",a,b);

    swap(&a,&b);
    printf("the value of a and b is %d and %d\n",a,b);

    return 0;
}