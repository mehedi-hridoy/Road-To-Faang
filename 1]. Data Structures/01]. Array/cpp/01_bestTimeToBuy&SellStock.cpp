#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; 
    
    vector<int> prices(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i]; 
    }

  
    int min_price = prices[0];
    int max_profit = 0;

    for(int i = 0; i < n; i++) {
        min_price = min(min_price, prices[i]);
        max_profit = max(max_profit, prices[i] - min_price);
    }

    cout << max_profit << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t; 
    
    while (t--) {
        solve();
    }

    return 0;
}