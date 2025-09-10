class Solution {
  public:
    bool solve(int indx, vector<int>& nums, vector<int>& ds, int target, int current_sum) {
        if (indx == nums.size()) {
            return (current_sum == target);
        }

        ds.push_back(nums[indx]);
        if (solve(indx + 1, nums, ds, target, current_sum + nums[indx])) {
            return true;
        }
        ds.pop_back();

        if (solve(indx + 1, nums, ds, target, current_sum)) {
            return true;
        }

        return false;
    }

    bool isSubsetSum(vector<int>& arr, int sum) {
        vector<int> ds;
        return solve(0, arr, ds, sum, 0);
    }
};
