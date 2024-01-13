#include <stdio.h>

int main() {
    int choice;
    int marks;

    do {
        printf("Menu:\n");
        printf("1 - Enter student marks\n");
        printf("0 - Exit\n");

        printf("Enter your choice (0 or 1): ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                break;
            case 1:
                printf("Enter student marks (out of 100): ");
                scanf("%d", &marks);

                if (marks >= 99) {
                    printf("This is good.\n");
                } else if (marks >= 89) {
                    printf("This is also good.\n");
                } else if (marks >= 59) {
                    printf("This is good as well.\n");
                } else {
                    printf("Work harder!\n");
                }
                break;
            default:
                printf("Invalid choice. Please enter 0 or 1.\n");
        }
    } while (choice!=0);

    return 0;
}