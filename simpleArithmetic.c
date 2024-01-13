#include<stdio.h>
int main () {


    int x,a,b,c;

    printf("Enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    x=a/(b-c);
    printf("%d",x);
    return 0;
}