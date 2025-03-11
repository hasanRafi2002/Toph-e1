// #include <stdio.h>

// long long factorialLast4Digits(int n) {
//     long long result = 1;
//     for (int i = 2; i <= n; i++) {
//         result *= i;
//         result %= 10000;  // Keep only the last 4 digits at each step
//     }
//     return result;
// }

// int main() {
//     int N;
//     scanf("%d", &N);

//     long long fact = factorialLast4Digits(N);

//     if (fact == 0) {
//         printf("0000\n"); // If the last 4 digits are all zeros
//     } else if (fact < 1000) {
//         printf("%04lld\n", fact); // Ensure 4-digit output with leading zeros
//     } else {
//         printf("%lld\n", fact); // Print normally if already 4 digits
//     }

//     return 0;
// }





#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
        result %= 10000;  // Keep only the last 4 digits at each step
    }
    return result;
}

int main() {
    int N;
    scanf("%d", &N);

    long long fact = factorial(N);  // Get the last 4 digits of N!

    if (fact == 0) {
        // If the last 4 digits are zero, print 0000
        printf("0000\n");
    } else {
        // Otherwise, print the last 4 digits
        printf("%04lld\n", fact);  // Use %04lld to ensure 4 digits with leading zeros if necessary
    }

    return 0;
}
