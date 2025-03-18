// longest nice subarray
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int startIndex=0;
        int ans=0;
        int bitsUnion=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int newEle=nums[i];

            while((bitsUnion & newEle)!=0){
                int startEle=nums[startIndex];

                bitsUnion^=startEle;
                startIndex++;

            }

            bitsUnion=bitsUnion | newEle;
            ans=max(ans,i-startIndex+1);
        }
        return ans;
    }
};
