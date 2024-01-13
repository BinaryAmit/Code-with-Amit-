#include<stdio.h>



int sum(int a,int b) {
    return a+b;
}

int sub(int a,int b) {
    return a-b;
}
int main()
{   int x,y;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);

    int c=sum(x,y);
    int d=sub(x,y);
    printf("%d+%d=%d\n",x,y,c);
    printf("%d-%d=%d",x,y,d);





    return 0;
}