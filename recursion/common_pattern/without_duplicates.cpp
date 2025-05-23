#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>>res;
    vector<int>ds;
    sort(nums.begin(),nums.end());
    generate_unique_subsequences(0,ds,nums,res);
    return res;

}
 
void generate_unique_subsequences(int index, vector<int>& ds, vector<int>& nums, vector<vector<int>>& result) {
    result.push_back(ds);  // Always include the current subset

    for (int i = index; i < nums.size(); i++) {
        // Skip duplicates
        if (i > index && nums[i] == nums[i - 1]) continue;

        ds.push_back(nums[i]);
        generate_unique_subsequences(i + 1, ds, nums, result);
        ds.pop_back();
    }
}

   