#include <stdio.h>

int main() {
    int rows = 5;

    for (int i=1; i<=rows; i++) {
        for(int j=1; j<rows+1-i; j++) {

            printf(" ");
        }
        for (int k=1; k<=rows; k++) {
            printf("*");
        }

        printf("\n");
    }


    return 0;
}