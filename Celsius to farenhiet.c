#include<stdio.h>
int main () {
    float celsius,fahrenheit;

    printf("Enter the temperature reading in celsius to get it in actual reading in fahrenheit\n");
    scanf("%f",& celsius);

    fahrenheit = (celsius * 9/5) + 32;


    printf("the temperature in celsius is %f\n", celsius);
    printf("the temperature in fahrenheit is %f\n", fahrenheit);

    return 0;
}