#include <stdio.h>
#include <stdlib.h>

// Function to find two numbers that add up to target
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;  // We need to return two indices
    int* result = (int*)malloc(2 * sizeof(int));  // Allocate memory for result

    // Brute force: Check every pair (i, j)
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {  // Check if sum equals target
                result[0] = i;
                result[1] = j;
                return result;  // Return indices
            }
        }
    }
    return NULL;  // No solution (won't happen as per problem statement)
}

// Main function to test the twoSum function
int main() {
    int nums[] = {2, 7, 11, 15};  // Example array
    int target = 22;
    int returnSize;

    int* result = twoSum(nums, 4, target, &returnSize);

    if (result) {
        printf("[%d, %d]\n", result[0], result[1]);  // Expected output: [0, 1]
        free(result);  // Free allocated memory
    }

    return 0;
}
