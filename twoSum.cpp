#include <vector>
#include <unordered_map>
using namespace std;


    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a hash map to store the value and its index
        unordered_map<int, int> num_map;
        
        for (int i = 0; i < nums.size(); i++) {
            // Calculate the complement of the current number
            int complement = target - nums[i];
            
            // Check if the complement exists in the hash map
            if (num_map.find(complement) != num_map.end()) {
                // If found, return the indices of the two numbers
                return {num_map[complement], i};
            }
            
            // Otherwise, add the current number and its index to the hash map
            num_map[nums[i]] = i;
        }
        
        // If no solution is found, return an empty vector
        return {};
    }