class Solution {
    public:
        int subsetXORSum(vector<int>& nums) {
            int totalSum=0;
            subsetXorSum(0,0,nums,totalSum);
            return totalSum;
        }
    
    void subsetXorSum(int index, int currentXor, vector<int>& nums, int& totalSum) {
        int n = nums.size();
        if (index == n) {
            totalSum += currentXor;
            return;
            
        }
        
        
        subsetXorSum(index + 1, currentXor ^ nums[index], nums, totalSum);
        
        
        subsetXorSum(index + 1, currentXor, nums, totalSum);
    }
    };
