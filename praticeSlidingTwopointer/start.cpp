#include<bits/stdc++.h>
using namespace std;


int  constantWindow(vector<int>arr,int k){
    int n=arr.size();
    int l=0;
    int r=k-1;
    int sum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<=r;i++){
        sum+=arr[i];
    }
    while(r<n-1){
       sum-=arr[l];
       l++;
       r++;
       sum+=arr[r];
       maxSum=max(maxSum,sum);
    }
    return maxSum;
}

int main(){
    vector<int>nums={-1,2,3,4,5,-1};
    cout<<constantWindow(nums,4);
    return 0;
}
