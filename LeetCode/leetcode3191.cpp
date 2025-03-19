class Solution {
public:
    void flipWindow(vector<int>&nums,int pos){
        nums[pos]^=1;
        nums[pos+1]^=1;
        nums[pos+2]^=1;
    }
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int oper=0;
        for(int i=0;i<n-2;i++){
            if(nums[i]==1)  continue;
            flipWindow(nums,i);
            oper++;
        }
        if(nums[n-2]==0 or nums[n-1]==0)
          return -1;
        return oper;
        
    }
};
