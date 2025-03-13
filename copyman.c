#include <stdio.h>
#include <stdlib.h>

void findMinimumNotes(int N) {
    int denominations[] = {500, 100, 50, 10, 5, 1}; // Denominations in descending order
    int noteCount = 0, result[10000]; // Array to store notes used
    int i, j;

    // Find the minimum number of notes
    for (i = 0; i < 6; i++) {
        while (N >= denominations[i]) { 
            N -= denominations[i]; // Reduce N by the note value
            result[noteCount++] = denominations[i]; // Store the note
        }
    }

    // Sort the notes in ascending order (Bubble Sort)
    for (i = 0; i < noteCount - 1; i++) {
        for (j = 0; j < noteCount - i - 1; j++) {
            if (result[j] > result[j + 1]) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }

    // Print the notes in ascending order
    for (i = 0; i < noteCount; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main() {
    int N;
    scanf("%d", &N); // Read input
    findMinimumNotes(N); // Find and print notes
    return 0;
}
