#include<iostream>
#include<vector>
using namespace std;

void subsequences_with_target_sum(int indx, int current_sum, int target,
                                  vector<int>& nums, vector<int>& ds,
                                  vector<vector<int>>& result) {
    int n = nums.size();
    if (indx == n) {
        if (current_sum == target) {
            result.push_back(ds);  // Store only if sum matches target
        }
        return;
    }

    // Include nums[indx]
    ds.push_back(nums[indx]);
    subsequences_with_target_sum(indx + 1, current_sum + nums[indx], target, nums, ds, result);
    ds.pop_back();
    // Exclude nums[indx]
    subsequences_with_target_sum(indx + 1, current_sum, target, nums, ds, result);
}

int main() {
    vector<int> arr = {3, 1, 2};
    int target = 3;
    vector<vector<int>> result;
    vector<int> ds;

    subsequences_with_target_sum(0, 0, target, arr, ds, result);

    // Print the result
    for (const auto& subseq : result) {
        for (int num : subseq) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
