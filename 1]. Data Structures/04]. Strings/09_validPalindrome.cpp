#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; 
    getline(cin , s);

    string cleaned = "";

    for(int i = 0; i < s.size(); i++) {
        if(isalnum(s[i])) {
            cleaned += tolower(s[i]);
        }
    }

    string reversed = cleaned; 

    reverse(reversed.begin(),reversed.end());

    if(cleaned == reversed ) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

}