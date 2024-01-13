#include<stdio.h>
int main () {

    int choice ;
    printf("choose the operation accordingly option\n");
    printf("1.Add\n2.subtract\n3.multiply\n");
    scanf("%d",& choice);
    int a,b;
    printf("Enter the value of a,b\n");
    scanf("%d%d",&a,&b);

    if(choice==1) {
        printf("the value by the operation on a,b is %d",a+b);
    } else if(choice==2) {
        printf("the value by the operation on a,b is %d",a-b);
    } else {
        printf("the value by the operation on a,b is %d",a*b);
    }
    return 0;
}