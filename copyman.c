#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char A[20], result[50]; // Input word and transformed password
    scanf("%s", A);  // Read input word

    int j = 0; // Index for result string

    // Convert the first character to uppercase and store in result
    result[j++] = toupper(A[0]);

    // Process the rest of the characters
    for (int i = 1; A[i] != '\0'; i++) {
        if (A[i] == 's') {
            result[j++] = '$';
        } else if (A[i] == 'i') {
            result[j++] = '!';
        } else if (A[i] == 'o') {
            result[j++] = '(';
            result[j++] = ')';  // Replacing 'o' with "()"
        } else {
            result[j++] = A[i];
        }
    }

    // Append a period at the end
    result[j++] = '.';
    result[j] = '\0';  // Null-terminate the result string

    // Output the transformed password
    printf("%s\n", result);

    return 0;
}
