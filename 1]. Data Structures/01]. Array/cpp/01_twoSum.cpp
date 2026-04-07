#include<bits/stdc++.h>

using namespace std;

// Your provided Two Sum function
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;  
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }
        mp[nums[i]] = i; 
    }
    return {}; 
}

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    
    // Read the number of elements and the target sum
    if (cin >> n >> target) {
        vector<int> nums(n);
        
        // Read the array elements
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        // Call your function
        vector<int> result = twoSum(nums, target);

        // Print the output
        if (!result.empty()) {
            cout << result[0] << " " << result[1] << "\n";
        } else {
            // Print -1 -1 if no valid pair is found
            cout << "-1 -1\n"; 
        }
    }

    return 0;
}