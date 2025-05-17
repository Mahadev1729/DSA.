class Solution {
    public:
        int firstMissingPositive(vector<int>& nums) {
            int missingNum=1;
            sort(nums.begin(),nums.end());
            for(auto num:nums){
                if(num>0){
                    if(num==missingNum){
                        missingNum++;
                    }
                    else if(num>missingNum) break;
                }
            }
            return missingNum;
        }
    };
