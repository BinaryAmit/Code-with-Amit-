#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
char star='*';
for(int j=1; j<=n; j++) {
        for(int i=1;i<=j;i++) {
            
                printf("%c",star);
                

            }
            printf("\n");}





    printf("Hello world!");
    return 0;
}