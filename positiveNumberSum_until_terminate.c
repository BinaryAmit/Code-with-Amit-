#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1;
    int sum = 0;
    while (n != 0)
    {
        printf("Enter  positive number\n");
        printf("for terminate enter 0\n");
        scanf("%d", &n);

        if (n > 0)
        {

            sum += n;
        }
    }

    printf("sum is %d \n", sum);
    return 0;
}