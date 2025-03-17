#include<bits/stdc++.h>

using namespace std;

int lowerBound(vector<int>nums,int target,int n)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int main(){
    vector<int>arr={3,5,8,15,19};
    int n=arr.size();
    int res=lowerBound(arr,8,n);
    cout<<"Lower Bound:"<<res;
    return 0;
    
}
