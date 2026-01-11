#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefixSum(n), suffixSum(n);

    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }

    suffixSum[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffixSum[i] = suffixSum[i + 1] + nums[i];
    }

    for (int i = 0; i < n; i++) {
        int leftSum = (i == 0) ? 0 : prefixSum[i - 1];
        int rightSum = (i == n - 1) ? 0 : suffixSum[i + 1];

        if (leftSum == rightSum) {
            return i;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {2, 3, -1, 8, 4};
    cout << solve(nums);
    return 0;
}
