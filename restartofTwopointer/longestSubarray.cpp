#include<iostream>
#include<vector>
using namespace std;


int longestSubarray(vector<int>arr,int k){
    int n=arr.size();
    int r=0;
    int l=0;
    int sum=0;
    int maxLen=0;
    while (r<n)
    {
        sum+=arr[r];
        while(sum>k){
            sum-=arr[r];
            l+=1;
        }
        if(sum<=k){
            maxLen=max(maxLen,r-l+1);
        }
        r+=1;
    }
    return maxLen;
}

int main(){
    vector<int>nums={2,5,1,7,10};
    cout<<longestSubarray(nums,14);
    return 0;
}
