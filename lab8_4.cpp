#include <stdio.h>

void generateBinaryNumbers(int n, char* currentNumber, int totalBits) {
    if (n == 0) {
        printf("%s\n", currentNumber);
        return;
    }

    currentNumber[totalBits - n] = '0';
    generateBinaryNumbers(n - 1, currentNumber, totalBits);

    currentNumber[totalBits - n] = '1';
    generateBinaryNumbers(n - 1, currentNumber, totalBits);
}

int main() {
//    int n; // Number of bits
//    printf("Enter the number of bits: ");
//    scanf("%d", &n);

    char currentNumber[2 + 1];

    generateBinaryNumbers(2, currentNumber, 2);

    return 0;
}

