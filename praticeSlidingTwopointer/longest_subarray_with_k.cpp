#include<bits/stdc++.h>

using namespace std;

// input array=[2,5,1,7,10]
// sum=14

int max_subarrayKsum(vector<int>&nums,int kSum){
    int n=nums.size();
    int sum=0;
    int r=0;
    int l=0;
    int maxLen=INT_MIN;
    while(r<n){
        sum+=nums[r];
        while(sum>kSum){
            sum-=nums[l];
            l++;
        }
        if(sum<=kSum){
            maxLen=max(maxLen,r-l+1);
        }
        r++;
    }
    return maxLen;
}

int main(){
    vector<int>arr={-1,3,4,5,6,7};
    int res=max_subarrayKsum(arr,14);
    cout<<res;
    return 0;

}
