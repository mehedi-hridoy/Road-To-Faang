#include<bits/stdc++.h>
using namespace std; 

vector<int> decimalToBinary (int n) {
    vector<int> binary;
    if(n == 0) {
        binary.push_back(0);
        return binary;
    }
    
    while( n!= 0) {
        int remainder = n % 2;
        binary.push_back(remainder);
        n = n / 2; 
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

int main() {
    int n;
    cin >> n; 

     vector<int> ans = decimalToBinary(n);

     for(int i = 0 ; i < ans.size(); i ++) {
        cout << ans[i] << " ";
     }
}