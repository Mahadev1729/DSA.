#include <bits/stdc++.h>
using namespace std;

void subsetXorSum(int index, int currentXor, vector<int>& nums, int& totalSum) {
    int n = nums.size();
    if (index == n) {
        totalSum += currentXor;
        return;
    }

    
    subsetXorSum(index + 1, currentXor ^ nums[index], nums, totalSum);

    subsetXorSum(index + 1, currentXor, nums, totalSum);
}

int subsetXORSum(vector<int>& nums) {
    int totalSum = 0;
    subsetXorSum(0, 0, nums, totalSum);
    return totalSum;
}

int main() {
    vector<int> nums = {1, 3,4,5}; 
    cout << "Subset XOR Sum: " << subsetXORSum(nums) << endl;
    return 0;
}
