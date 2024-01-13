#include <stdio.h>

int main() {
    int speed = 0;
    int distance = 0;
    char choice;

    printf("Welcome to the Car Simulator!\n");

    do {
        printf("\nCurrent Speed: %d km/h\n", speed);
        printf("Distance Traveled: %d km\n", distance);

        printf("\nMenu:\n");
        printf("1. Accelerate\n");
        printf("2. Decelerate\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                speed += 10;
                distance += speed;
                break;
            case '2':
                if (speed >= 10) {
                    speed -= 10;
                    distance += speed;
                } else {
                    printf("\nCannot decelerate further!.........>>>>>>>\n");
                }
                break;
            case '3':
                printf("\nExiting the Car Simulator..........>>>>>>>\n");
                break;
            default:
                printf("\nInvalid choice! Please try again..........>>>>>>>>\n");
        }
    } while (choice != '3');

    return 0;
}