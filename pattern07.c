#include <stdio.h>
int main()
{
    int rows;
    printf("Enter no. of rows:\n");
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
            char ch = (char)(k + 64);
            printf("%c", ch);
        }
        nst++;

        int a = i - 1;

        for (int q = 1; q <= i - 1; q++)
        {

            char ch = (char)(a + 64);

            printf("%c", ch);
            a--;
        }

        printf("\n");
    }
    return 0;
}