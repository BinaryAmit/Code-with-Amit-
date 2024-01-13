#include <stdio.h>

int main() {
    int rows = 5;

    for (int i=1; i<=rows; i++) {
        for(int j=1; j<rows+1-i; j++) {

            printf(" ");
        }
        for (int k=1; k<=i; k++) {
            int d=k+64;
            char ch=(char)d;
            printf("%c",ch);
        }

        printf("\n");
    }


    return 0;
}