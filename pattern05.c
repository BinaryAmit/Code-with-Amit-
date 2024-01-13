#include <stdio.h>
int main()
{
    int rows;
    printf("Enter no. of rows:");
    scanf("%d", &rows);
    int nsp = rows - 1;
    int nst = 1;
    int a = 0;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
        }
        nsp--;
        for (int k = 1; k <= nst; k++)
        {
            printf("%d", k);
        }
        nst++;

        int a = i - 1;
        for (int q = 1; q <= i - 1; q++)
        {

            printf("%d", a);
            a--;
        }

        printf("\n");
    }
    return 0;
}