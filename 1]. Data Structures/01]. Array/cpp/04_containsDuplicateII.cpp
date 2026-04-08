#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_set<int> window;
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        if (window.count(nums[i])) {
            found = true;
            break;
        }
        
        window.insert(nums[i]);
        
        if (window.size() > k) {
            window.erase(nums[i - k]);
        }
    }
    
    if (found) {
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