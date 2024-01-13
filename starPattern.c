#include <stdio.h>

int star_pattern(int n)
{
    char star = '*';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%c", star);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int a = 9;
    printf("%d\n", a);
    star_pattern(a);
    return 0;
}