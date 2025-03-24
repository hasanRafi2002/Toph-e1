#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isUppercase(char *word) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (!isupper(word[i])) {
            return 0; // Return 0 if the word is not fully uppercase
        }
    }
    return 1; // Return 1 if the word is fully uppercase
}

int main() {
    char line[101]; // To store the input line (maximum 100 characters + 1 for '\0')
    char word[101]; // To store each individual word
    char result[1010] = ""; // To store the final result (with space for multiple words)
    
    // Read the input line
    fgets(line, sizeof(line), stdin);
    
    int resultLen = 0; // To track the length of the result
    
    // Extract words from the input line
    int i = 0;
    while (sscanf(line + i, "%s", word) == 1) {
        // Check if the word is not fully uppercase
        if (!isUppercase(word)) {
            // If result is not empty, add a space
            if (resultLen > 0) {
                result[resultLen++] = ' ';
            }
            // Append the word to the result
            int j = 0;
            while (word[j] != '\0') {
                result[resultLen++] = word[j++];
            }
        }
        // Move the index to the next word
        while (line[i] != ' ' && line[i] != '\0') {
            i++;
        }
        if (line[i] != '\0') {
            i++; // Skip the space
        }
    }
    
    // Null-terminate the result string
    result[resultLen] = '\0';
    
    // Print the result
    printf("%s\n", result);
    
    return 0;
}
