// Finding all the unique substrings 
#include<bits/stdc++.h>
using namespace std;
int main() {

    string s;
    cin >> s;

    vector<string> subString(s.size());

    for(int i = 0; i < s.size(); i++) {
        unordered_set<char> seen;
        for(int j = i ; j < s.size(); j ++) {
            if(seen.count(s[j])) {
                break;
            }
            seen.insert(s[j]);

            subString.push_back(s.substr(i,j - i + 1));
        }
    }

    for(int i =0; i < subString.size(); i ++) {
        cout << subString[i] << endl;
    }

    return 0; 

    
}