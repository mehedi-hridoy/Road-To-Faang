// valid anagram optimized 
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,t;
    cin >> s >> t; 

    if(s.size() != t.size()) {
        cout << "false" << endl;
        return 0;
    }

    vector<int> freq(26,0);

    for(int i =0; i < s.size(); i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for(int count : freq) {
        if(count != 0) {
            cout << "false" << endl;
            return 0;
        } 
    }
    cout << "true" << endl;


}