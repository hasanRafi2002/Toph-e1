#include <stdio.h>

int main() {
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    int arr[100];  // Max size as per constraint: N < 100

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum from index A to B (inclusive)
    int sum = 0;
    for (int i = A; i <= B; i++) {
        sum += arr[i];
    }

    // Output the result
    printf("%d\n", sum);

    return 0;
}
