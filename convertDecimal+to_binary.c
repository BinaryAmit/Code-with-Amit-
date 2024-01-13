#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("Binary representation: 0\n");
        return;
    }

    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;
    printf("Enter decimal number:");
    scanf("%d",&decimalNumber);
    decimalToBinary(decimalNumber);

    return 0;
}
