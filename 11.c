#include <stdio.h>
int main()
{
    int n, ld,sum=0;
    printf("Enter number : ");
    scanf("%d", &n);
    int num = n;

    while (n>0){
        ld = n% 10;
        sum += ld*ld*ld;
        n /= 10;
    }
    if (sum == num)
    {
       printf("Armstrong number");
    }else{
       printf("Not Armstrong number");

    }
    

        return 0;
}