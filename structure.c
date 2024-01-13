#include <stdio.h>
#include <string.h>

typedef struct driver
{
    char name[20];
    char dlNo[20];
    char route[20];
    int kms;
} driverDetails;

int main()
{
    driverDetails driver[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter details of Driver %d\n", i + 1);

        printf("Enter your Name: ");
        fgets(driver[i].name, sizeof(driver[i].name), stdin);
        driver[i].name[strcspn(driver[i].name, "\n")] = '\0'; // Remove the newline

        printf("Enter your Driving Licence No.: ");
        fgets(driver[i].dlNo, sizeof(driver[i].dlNo), stdin);
        driver[i].dlNo[strcspn(driver[i].dlNo, "\n")] = '\0'; // Remove the newline

        printf("Enter your Route: ");
        fgets(driver[i].route, sizeof(driver[i].route), stdin);
        driver[i].route[strcspn(driver[i].route, "\n")] = '\0'; // Remove the newline

        printf("Kms you've driven already: ");
        scanf("%d", &driver[i].kms);

        // Consume the newline character left in the input buffer
        while (getchar() != '\n')
            ;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", driver[i].name);
        printf("%s\n", driver[i].dlNo);
        printf("%s\n", driver[i].route);
        printf("%d\n", driver[i].kms);
    }

    return 0;
}
