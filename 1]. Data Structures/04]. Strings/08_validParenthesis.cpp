#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    stack<char> st;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }
        else {

            // no opening bracket exists
            if(st.empty()) {
                cout << "false" << endl;
                return 0;
            }

            char top = st.top();
            if(
                (s[i] == ')' && top == '(') ||
                (s[i] == '}' && top == '{') ||
                (s[i] == ']' && top == '[')
            ) {
                st.pop();
            }

            else {
                cout << "false" << endl;
                return 0;
            }
        }
    }
    if(st.empty()) {
        cout << "true" << endl;
    }

    else {
        cout << "false" << endl;
    }
}