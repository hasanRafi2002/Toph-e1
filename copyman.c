#include <stdio.h>
#include <string.h>

void formatNumber(int A) {
    char num[12];  // Max length for 200,000,000 (8 digits + 2 commas + '\0')
    sprintf(num, "%d", A);  // Convert integer to string

    int len = strlen(num);
    int commaCount = (len - 1) / 3;  // Number of commas needed

    char result[12];  // Result string
    int j = 0, count = 0;

    // Iterate through the number and insert commas
    for (int i = 0; i < len; i++) {
        if (i > 0 && (len - i) % 3 == 0) {
            result[j++] = ',';  // Insert comma before every group of 3 digits
        }
        result[j++] = num[i];
    }

    result[j] = '\0';  // Null-terminate the string

    printf("%s\n", result);  // Print formatted number
}

int main() {
    int A;
    scanf("%d", &A);
    formatNumber(A);
    return 0;
}
