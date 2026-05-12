#include<bits/stdc++.h>
using namespace std; 
int main() {
    string s; 
    cin >> s; 
    vector<string> lSubString(s.size());

    for(int i = 0 ; i < s.size(); i ++ ) {
        unordered_set<char> seen; 
        for(int j = i; j < s.size(); j++) {
            if(seen.count(s[j])) {
                break;
            }

            seen.insert(s[j]);

            lSubString.push_back(s.substr(i, j - i  + 1 ));
        }
    }

    int maxLength = 0; 
    string longestSub = "";

    for(int i = 0; i < lSubString.size(); i ++) {
        if(lSubString[i].size() > maxLength) {
            maxLength = lSubString[i].size();
            longestSub = lSubString[i];
        }
    }

    cout << "Maximum Length " << maxLength << endl;
    cout << "Longest Substring " << longestSub << endl; 

    return 0; 
}