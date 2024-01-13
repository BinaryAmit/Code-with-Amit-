#include<stdio.h>
int main()
{

   int a,b,c,d;
    //d=a*b*c;  //if we declared d here its  0 store a garbage value (or 0) bcz yet we don't initialise a,b,c
     
     printf("enter the value of a:");
     scanf("%d",&a);
     
     printf("enter the value of b:");
     scanf("%d",&b);
     
     printf("enter the value of c:");
     scanf("%d",&c);
     
    d=a*b*c;
     printf("the value of d is %d\n",d);



    return 0;


}