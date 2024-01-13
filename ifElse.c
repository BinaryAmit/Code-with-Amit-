#include<stdio.h>

int main() {

    int a;
    printf("enter a positive integer: ");
    scanf("%d",&a);

    if(a%5==0) {
        if(a%3==0) {
            printf("the number is divisible by 5 and 3%d",a);
        }

    }

    else {
        printf("%d is not divided by 5 and 3",a);
    }



    return 0;
}