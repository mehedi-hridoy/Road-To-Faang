#include<bits/stdc++.h>

using namespace std;

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
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    
    if (cin >> n >> target) {
        vector<int> nums(n);
        
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        vector<int> result = twoSum(nums, target);

        if (!result.empty()) {
            cout << result[0] << " " << result[1] << "\n";
        } else {
            cout << "-1 -1\n"; 
        }
    }

    return 0;
}