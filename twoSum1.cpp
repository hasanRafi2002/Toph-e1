// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//     unordered_map<int, int> num_to_index;
    
//     for (int i = 0; i < nums.size(); i++) {
//         int complement = target - nums[i];
        
//         if (num_to_index.find(complement) != num_to_index.end()) {
//             return {num_to_index[complement], i};
//         }
        
//         num_to_index[nums[i]] = i;
//     }
    
//     return {};
// }

// int main() {
//     int n, target;
//     cin >> n;  // Read size of array
    
//     vector<int> nums(n);
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];  // Read array elements
//     }
    
//     cin >> target;  // Read target

//     vector<int> result = twoSum(nums, target);
    
//     cout << result[0] << " " << result[1] << endl;

//     return 0;
// }




#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i};
        }
        num_map[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 22, 34, 35, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}

