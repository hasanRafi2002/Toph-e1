#include <stdio.h>

void printFibonacciInRange(int L, int R) {
    int a = 0, b = 1, next;
    int printedOne = 0; // Flag to ensure '1' is printed only once

    // Print first Fibonacci number if in range
    if (a >= L) printf("%d\n", a);

    // Print second Fibonacci number if in range
    if (b >= L && b <= R) {
        printf("%d\n", b);
        printedOne = 1; // Mark that '1' is printed
    }

    // Generate next Fibonacci numbers
    next = a + b;
    while (next <= R) {
        if (next >= L) {
            if (next == 1 && printedOne) {
                // Skip printing '1' if it's already printed
                a = b;
                b = next;
                next = a + b;
                continue;
            }
            printf("%d\n", next);
        }
        a = b;
        b = next;
        next = a + b;
    }
}

int main() {
    int L, R;
    scanf("%d %d", &L, &R);
    printFibonacciInRange(L, R);
    return 0;
}
