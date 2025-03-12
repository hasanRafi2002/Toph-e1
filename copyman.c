#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);  // Input X and Y
    int remainder = Y % X;  // Calculate the remainder
    int additionalChocolates = (remainder == 0) ? 0 : (X - remainder);  // Calculate additional chocolates
    printf("%d\n", additionalChocolates);  // Output the result
    return 0;
}
