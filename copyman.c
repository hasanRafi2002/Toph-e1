#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

int main() {
    char A[100], B[100];
    int freqA[26] = {0}, freqB[26] = {0}; // Arrays to store letter frequencies

    scanf("%s", A);
    scanf("%s", B);

    // Step 1: Check if lengths are the same
    if (strlen(A) != strlen(B)) {
        printf("No\n");
        return 0;
    }

    // Step 2: Count frequency of each letter in A and B
    for (int i = 0; A[i] != '\0'; i++) {
        freqA[tolower(A[i]) - 'a']++; // convert to lowercase and update frequency
        freqB[tolower(B[i]) - 'a']++;
    }

    // Step 3: Compare frequency arrays
    for (int i = 0; i < 26; i++) {
        if (freqA[i] != freqB[i]) {
            printf("No\n");
            return 0;
        }
    }

    // If all frequencies match
    printf("Yes\n");
    return 0;
}
