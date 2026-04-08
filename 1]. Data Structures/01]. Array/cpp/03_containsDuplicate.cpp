#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_set<int> seen;
    bool has_duplicate = false;
    
    for (int i = 0; i < n; i++) {
        if (seen.count(nums[i])) {
            has_duplicate = true;
            break; 
        }
        seen.insert(nums[i]);
    }
    
    if (has_duplicate) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}