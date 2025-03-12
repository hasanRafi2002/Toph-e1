#include <stdio.h>
#include <string.h>

void caesarCipher(char message[], int shift) {
    for (int i = 0; message[i] != '\0'; i++) {
        char c = message[i];

        if (c >= 'a' && c <= 'z') {
            message[i] = (c - 'a' - shift + 26) % 26 + 'a';
        } else if (c >= 'A' && c <= 'Z') {
            message[i] = (c - 'A' - shift + 26) % 26 + 'A';
        }
        // Spaces and other characters remain unchanged
    }
}

int main() {
    int N;
    char message[101]; // Max 100 characters + null terminator

    scanf("%d", &N);  
    getchar(); // Ignore the newline left in the buffer
    fgets(message, sizeof(message), stdin); 

    // Remove the newline character if present
    int len = strlen(message);
    if (message[len - 1] == '\n') {
        message[len - 1] = '\0';
    }

    caesarCipher(message, N);
    printf("%s\n", message);

    return 0;
}
