#include<stdio.h>
int main ()
{
    //   *******
    //   *** ***
    //   **   **
    //   *     *
    int n=5;

    int nst=n-1;
    int nsp=1;
    for(int a=1; a<=2*n-1; a++) {

        printf("*");
    }
    printf("\n");

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=nst; j++) {

            printf("*");
        }
        for(int k=1; k<=nsp; k++) {
            printf(" ");
        }
        for(int k=1; k<=n-i; k++) {
            printf("*");
        }
        nst--;
        nsp+=2;

        printf("\n");
    }







    return 0;
}
