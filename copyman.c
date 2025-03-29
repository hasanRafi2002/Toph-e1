#include <stdio.h>

int main() {
    int totalSum, a, b, c;
    
    // Input the total sum and the three known numbers
    scanf("%d", &totalSum);
    scanf("%d %d %d", &a, &b, &c);
    
    // Calculate the missing number by subtracting the sum of the known numbers from the total sum
    int missingNumber = totalSum - (a + b + c);
    
    // Output the missing number
    printf("%d\n", missingNumber);
    
    return 0;
}
