#include<stdio.h>
#define pi 3.14

int main(){
    
    int radius;
    
    printf("what is the radius of circle:");
    scanf("%d",&radius);
    
    printf("the area of circle is %.2f\n",pi*radius*radius);
    
    
    return 0;
    }