#include <stdio.h>
#include<stdlib.h>
int main()
{

    int x;
    printf("enter an integer:");
    scanf("%d", &x);
    // if (x>=0)

    //     printf("the absolute value is %d",x);

    // else
    //     printf("the absolute value is %d",-x);



    int absolute=abs(x);
    printf("Absolute value=%d",absolute);
    return 0;
}