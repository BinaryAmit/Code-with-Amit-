#include <stdio.h>

int main()
{
    int *p, sum = 0, i;  // Initialize sum to 0
    int x[5] = {5, 9, 6, 3, 7};
    i = 0;
    p = x;

    printf("Element value address\n\n");
    while (i < 5)
    {
        printf("x[%d] %d %u\n", i, *p, p);
        sum = sum + *p;
        i++, p++;
    }
    printf("\n sum    =%d %u\n", sum);
    printf("\n &x[0]  =%u\n", &x[0]);
    printf("\n p      =%u\n", p);

    return 0;
}
