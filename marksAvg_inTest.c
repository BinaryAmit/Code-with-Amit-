#include <stdio.h>
int main()
{
    float test1, test2, test3;

    printf("Enter the marks of test1:\n");
    scanf("%f", &test1);

    printf("Enter the marks of test2:\n");
    scanf("%f", &test2);

    printf("Enter the marks of test3:\n");
    scanf("%f", &test3);

    float avg;
    avg = (test1 + test2 + test3) / 3;
    printf("your Mark's in all test are respectively %f , %f , %f \n", test1, test2, test3);
    printf("and your avg marks is %f\n", avg);

    return 0;
}