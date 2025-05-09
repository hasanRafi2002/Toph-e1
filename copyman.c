#include <stdio.h>

int main() {
    char s[26];  // Assuming the input will be at most 25 characters + 1 for '\0'
    scanf("%s", s);

    int balance = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            balance++;
        } else if (s[i] == ')') {
            balance--;
            if (balance < 0) {
                // A closing parenthesis without a matching opening one
                printf("No\n");
                return 0;
            }
        }
    }

    // Check if all opening parentheses are closed
    if (balance == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
