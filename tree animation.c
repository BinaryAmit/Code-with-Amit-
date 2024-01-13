#include <stdio.h>
#include <unistd.h>

int main() {
    int i, j;
    int height = 10; // Adjust the height of the tree here

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= height - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("❤️");
            fflush(stdout);
            usleep(50000); // Adjust the animation speed here
        }
        printf("\n");
    }

    // Print the trunk of the tree
    for (i = 1; i <= height - 3; i++) {
        printf(" ");
    }
    printf("❤️❤️❤️\n");
    
    return 0;
}