// 424 Leetcode . Longest Reepeating Character
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int k; cin >> k;

    unordered_map<char,int> freq;
    int  left = 0; 
    int maxFreq = 0;
    int maxLength = 0;

    for(int i = 0; i < s.size(); i ++) {
        freq[s[i]]++;
        maxFreq = max(maxFreq, freq[s[i]]);

        int windowLength = i - left + 1;

        while(windowLength - maxFreq > k ) {
            freq[s[left]]--;
            left++;
            windowLength = i - left + 1;
        }

        maxLength = max(maxLength, windowLength);
    }

    cout << maxLength << endl;
}