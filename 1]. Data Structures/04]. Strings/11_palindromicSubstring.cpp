#include<bits/stdc++.h>
using namespace std; 

bool isPalindrome(string str) {
    int left = 0; 
    int right = str.size() - 1; 

    while(left < right ) {
        if(str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    string s;
    cin >> s; 
    int count = 0; 
    for(int i = 0; i < s.size(); i ++) {
        for(int j = i; j < s.size(); j++) {
            string sub = s.substr(i , j + 1 );

            if(isPalindrome(sub)) {
                count++;
            }
        }
    }

    cout << count << endl; 
}