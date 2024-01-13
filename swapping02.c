#include <stdio.h>
int main()
{
    int a, b;
    a = 5;
    b = 6;
    printf("before swapping a & b are respectively %d , %d \n", a, b);
    int k = a * b;
    b = a;
    a = k / b;
    printf("after swapping a & b are respectively %d , %d \n", a, b);

    return 0;
}