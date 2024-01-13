#include <stdio.h>
int main()
{
    int arr1[] = {3, 5, 7, 6};

    int n;
retry:
    printf("Enter number to search in element:");
    scanf("%d", &n);

    for (int i = 0; i < 4; i++)
    {
        if (arr1[i] == n)
        {
            printf("number is matched with array element........>>>>>>>>>>>>>");

            return 0;
        }
    }

    printf("the number is not matching with array element\n");
    printf("for continue press 1 else press 0\n");
    int m;
    scanf("%d", &m);
    switch (m)
    {
    case '1':
        goto retry;
        break;
    case '0':
        printf("you are quitting...........>>>>>>>>>>\n");
        break;
    }

    return 0;
}