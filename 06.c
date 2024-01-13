#include<stdio.h>
int main(){
    float p,r,t,SI;
    printf("Enter Principal amount : ");
    scanf("%f",&p);
    printf("Enter Rate of interest : ");
    scanf("%f",&r);
    printf("Enter time : ");
    scanf("%f",&t);
    
    SI = (p*r*t)/100;

    printf("%.2f",SI);
return 0;
}