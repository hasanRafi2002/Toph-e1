#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 10000  // Size of hash table (adjust based on problem constraints)

// Define a structure for hash table entries
typedef struct HashNode {
    int key;        // Stores the number (nums[i])
    int value;      // Stores the index (i)
    struct HashNode* next;
} HashNode;

// Hash table array
HashNode* hashTable[HASH_SIZE];

// Hash function (simple modulus function)
int hashFunction(int key) {
    return abs(key) % HASH_SIZE;  // Use absolute value to avoid negative indices
}

// Insert key-value pair into the hash table
void insert(int key, int value) {
    int hashIndex = hashFunction(key);
    HashNode* newNode = (HashNode*)malloc(sizeof(HashNode));
    newNode->key = key;
    newNode->value = value;
    newNode->next = hashTable[hashIndex];  // Insert at the head (chaining)
    hashTable[hashIndex] = newNode;
}

// Search for a key in the hash table
int search(int key) {
    int hashIndex = hashFunction(key);
    HashNode* node = hashTable[hashIndex];
    
    while (node) {
        if (node->key == key)
            return node->value;  // Return index if found
        node = node->next;
    }
    return -1;  // Not found
}

// Function to find two indices that add up to the target
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;  // LeetCode expects returnSize to be set to 2
    int* result = (int*)malloc(2 * sizeof(int));  // Allocate memory for result
    
    // Initialize hash table
    for (int i = 0; i < HASH_SIZE; i++) {
        hashTable[i] = NULL;
    }

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];  // Compute complement
        int complementIndex = search(complement);  // Check if complement exists
        
        if (complementIndex != -1) {  // If found, return the indices
            result[0] = complementIndex;
            result[1] = i;
            return result;
        }

        insert(nums[i], i);  // Store current number in the hash table
    }
    
    return NULL;  // Should not happen as per the problem statement
}

// Driver Code to Test the Function
int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 22;
    int returnSize;
    
    int* result = twoSum(nums, 4, target, &returnSize);
    
    if (result) {
        printf("[%d, %d]\n", result[0], result[1]);  // Expected output: [0, 1]
        free(result);  // Free allocated memory
    }
    
    return 0;
}
