#include<iostream>
#include<vector>
using namespace std;

void solve(int indx, int current_sum, int target,vector<int>& nums, vector<int>& ds,vector<vector<int>>& result) {
    int n = nums.size();
    if (indx == n) {
        if (current_sum == target) {
            result.push_back(ds);  // Store only if sum matches target
        }
        return;
    }

    // Include that particular index number
    ds.push_back(nums[indx]);
    solve(indx + 1, current_sum + nums[indx], target, nums, ds, result);
    ds.pop_back();
    // Exclude that particular index number
    solve(indx + 1, current_sum, target, nums, ds, result);
}

int main() {
    vector<int> arr = {3, 1, 2,-1,4,5,-2};
    int target = 3;
    vector<vector<int>> result;
    vector<int> ds;

     solve(0, 0, target, arr, ds, result);

    int cnt=0;
    int max_len=INT_MIN;

    // Print the result
    for (const auto& subseq : result) {
        for (int num : subseq) {
            cout<<num<<" ";
         

        }
        cnt++;
        cout << endl;
    }

    cout<<cnt;

    return 0;
}
