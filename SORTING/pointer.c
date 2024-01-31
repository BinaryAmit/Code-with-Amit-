#include<stdio.h>
int main(){
    int a=5;
    int *b=&a;
   // b=&a;
    printf("%d\n",*b);
    printf("%d\n",b);
    
    
return 0;
}