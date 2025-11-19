#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<vector<int>>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        if (ans.empty() || nums[i][0] > ans.back()[1]) {
            ans.push_back(nums[i]);  // New interval
        } else {
            ans.back()[1] = max(ans.back()[1], nums[i][1]); 
        }
    }
    return ans;
}

int main() {
    
    vector<vector<int>> nums = {{1,3}, {2,6}, {8,10}, {15,18}};

    vector<vector<int>> result = solve(nums);

    
    cout << "Merged intervals:" << endl;
    for (auto &interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
