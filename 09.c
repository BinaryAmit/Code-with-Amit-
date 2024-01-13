#include <stdio.h>
int main()
{

    int a[6] = {3, 6, 54, 76, 8, 7};
    int max = a[0];
    for (int i = 0; i < 6; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Max : %d", max);
    return 0;
}