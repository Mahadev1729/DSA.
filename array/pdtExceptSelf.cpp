#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& nums) {
    int zeroCount = 0;
    long long product = 1;

   
    for (int x : nums) {
        if (x == 0) {
            zeroCount++;
        } else {
            product *= x;
        }
    }

    vector<int> ans(nums.size(), 0);

    if (zeroCount > 1) {
        
        return ans;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (zeroCount == 0) {
            ans[i] = product / nums[i];
        } else {
            if (nums[i] == 0) {
                ans[i] = product;
            } else {
                ans[i] = 0;
            }
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 0};
    vector<int> result = solve(nums);

    for (auto it : result) {
        cout << it << " ";
    }
    return 0;
}
