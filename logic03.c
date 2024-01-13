#include<stdio.h>

int main()
{    char u='*';

        // for understanding the concept of use after integer number before format specifier
        printf("%5c%c\n",u,u);
        printf("%4c  %c\n",u,u);
        printf("%3c    %c\n",u,u);
        printf("%2c      %c\n",u,u);
    printf("Hello world!\n");
    return 0;
}