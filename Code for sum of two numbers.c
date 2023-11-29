#include <stdio.h>  // Include the standard input/output library

int main() {
    // Declare variables to store the two numbers and the result
    double num1, num2, sum;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);  // Read the first number from the user

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);  // Read the second number from the user

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);

    return 0;  // Indicate successful completion of the program
}
