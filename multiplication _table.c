
#include <stdio.h>

int main() {
    int number, i;

    // Ask the user for the number for which they want the multiplication table
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the multiplication table for the given number
    printf("Multiplication Table for %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n",number,i, number * i);
    }

    return 0;
}
