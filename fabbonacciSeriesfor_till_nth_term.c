#include <stdio.h>

int main()
{
    int p = 0, q = 1, n;
    int lastTerm;

    printf("Enter nth term of fabonacci series:");
    scanf("%d", &lastTerm);

    while (p <= lastTerm)
    {
        printf("%d ", p);
        n = p + q;
        p = q;
        q = n;
    }

    return 0;
}
