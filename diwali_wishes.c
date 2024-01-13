#include <stdio.h>
#include <unistd.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("\r      "); // Clear the previous line
        fflush(stdout);
        usleep(500000); // Sleep for 500 milliseconds (0.5 seconds)
        
        printf("\rHappy Diwali"); // Display the message
        fflush(stdout);
        usleep(500000); // Sleep for 500 milliseconds (0.5 seconds)
    }
    
    printf("\n");
    return 0;
}