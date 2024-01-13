#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the computer's choice
int getComputerChoice() {
    srand(time(NULL)); // Seed for random number generation
    return rand() % 3; // Generates a random number between 0 and 2
}

// Function to display the choices
void displayChoices() {
    printf("0. Rock\n");
    printf("1. Paper\n");
    printf("2. Scissors\n");
}

int main() {
    int userChoice, computerChoice;

    // Get user choice
    printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &userChoice);

    // Validate user input
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice. Please enter 0, 1, or 2.\n");
        return 1; // Return an error code
    }

    // Get computer choice
    computerChoice = getComputerChoice();

    // Display choices
    printf("\nYour choice: ");
    switch (userChoice) {
        case 0: printf("Rock\n"); break;
        case 1: printf("Paper\n"); break;
        case 2: printf("Scissors\n"); break;
    }

    printf("Computer's choice: ");
    switch (computerChoice) {
        case 0: printf("Rock\n"); break;
        case 1: printf("Paper\n"); break;
        case 2: printf("Scissors\n"); break;
    }

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
