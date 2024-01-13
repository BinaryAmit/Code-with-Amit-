#include <stdio.h>

int main() {
    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    printf("ASCII value of %c is %d\n", input, input);

    return 0;
}