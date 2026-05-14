#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    int left = 0;
    int right = s.size() - 1;

    while(left < right) {

    
        while(left < right && !isalnum(s[left])) {
            left++;
        }

        while(left < right && !isalnum(s[right])) {
            right--;
        }

        if(tolower(s[left]) != tolower(s[right])) {
            cout << "false" << endl;
            return 0;
        }

        left++;
        right--;
    }

    cout << "true" << endl;
}