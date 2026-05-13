// 424 Leetcode . Longest Reepeating Character
#include<bits/stdc++.h>
using namespace std; 
int main() {
    string s; 
    cin >> s; 
    int k; cin >> k; 

    int maxLength = 0; 

    for(int i =0; i < s.size(); i++) {
        unordered_map<char,int> freq;
        int maxFreq = 0; 
        for(int j = i; j < s.size(); j++) {
            // add current character
            freq[s[j]]++;
            // track highest frequency 
            maxFreq = max(maxFreq, freq[s[j]]);

            // current substring 
            int windowLength = j - i + 1; 
            int replacementNeeded = windowLength - maxFreq;

            // valid substring 
            if(replacementNeeded <= k) {
                maxLength = max(maxLength, windowLength);
            }


        }
    }

    cout << maxLength << endl;
}