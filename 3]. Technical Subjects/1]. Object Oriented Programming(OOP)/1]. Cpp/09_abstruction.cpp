#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
// abstruction using header files  
int main() {
    vector<int> v = {5, 2, 9, 1, 5, 6};

    sort(v.begin(), v.end());

    // we don't know here how sort is working behind the scenes, this is abstruction, we are just using the sort function without worrying about the implementation details

    for(auto i : v) {
        cout << i << endl;
    }

    return 0; 
}