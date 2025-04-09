class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_set<int>uniqueNum;
       for(int i=0;i<n;i++){
        if(nums[i]<k) return -1;
        else if(nums[i]>k) uniqueNum.insert(nums[i]);
       }   
       return uniqueNum.size();
    }
};
