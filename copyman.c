#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Read the number of elements

    int maxVal = 0;  // Initialize max with the lowest possible value

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        if (num > maxVal) {
            maxVal = num;  // Update max if the current number is greater
        }
    }

    printf("%d\n", maxVal);  // Print the maximum value
    return 0;
}
