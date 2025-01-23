#include<iostream>
#include<vector>

using namespace std;

int betterLongestSubarray(vector<int>arr,int s,int target){
    int l=0,r=0,sum=0,maxLen=0;
    while(r<s){
        sum=sum+arr[r];
        while(sum>target){
            sum=sum-arr[l];
            l++;
        }
        if(sum<=target){
            maxLen=max(maxLen,r-l+1);
        }
        r++;
    }
    return maxLen;
}

int main(){
    vector<int>arr={2,5,1,10,10};
    int n=arr.size();

    int k=14;
    int maxLength=betterLongestSubarray(arr,n,k);
    cout<<maxLength;
    return 0;
}

