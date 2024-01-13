#include<stdio.h>

int factorial(int n) {
    if(n==0||n==1) {
        return 1;
    }
    
 return n*factorial(n-1);
}
int main() {
    int n;
    printf("Enter the number whose factorial u want:");
    scanf("%d",&n);
   
    int  result =factorial(n);
    if(n<0){
    printf("the factorial is not define for nagative number s\n");}
    else{
    printf("factorial of %d is %d\n",n, result);}
    return 0;


}