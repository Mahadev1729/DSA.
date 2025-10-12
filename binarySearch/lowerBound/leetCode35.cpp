#include<bits/stdc++.h>

using namespace std;


int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=n;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    
    int main(){
        vector<int>arr={2,3,4,5,6,7,9};
        int res=searchInsert(arr,8);
        cout<<res;
        return 0;
    }

