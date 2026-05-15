#include<bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {-1,0,1,2,-1,-4};

    set<vector<int>> uniqueTriplets;

    int n = nums.size();

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            for(int k = j + 1; k < n; k++) {

                int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0) {

                    vector<int> triplet = {
                        nums[i],
                        nums[j],
                        nums[k]
                    };

                    // normalize order
                    sort(triplet.begin(), triplet.end());

                    uniqueTriplets.insert(triplet);
                }
            }
        }
    }

    for(auto triplet : uniqueTriplets) {

        cout << "[ ";

        for(int num : triplet) {
            cout << num << " ";
        }

        cout << "]" << endl;
    }
}