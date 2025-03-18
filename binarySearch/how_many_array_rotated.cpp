// Given an increasing sorted rotated array arr of distinct integers. The array is right-rotated k times. Find the value of k.
// Let's suppose we have an array arr = [2, 4, 6, 9], so if we rotate it by 2 times so that it will look like this:
// After 1st Rotation : [9, 2, 4, 6]
// After 2nd Rotation : [6, 9, 2, 4

#include<bits/stdc++.h>
using namespace std;

int findKthRot(vector<int>nums){
    int n=nums.size();
    int minEle=INT_MAX;
    int minIndex;
    for(int i=0;i<n;i++){
        if(nums[i]<minEle){
            minEle=nums[i];
            minIndex=i;
        }
    }
    return minIndex;
}

int main(){
    vector<int>arr={3,4,5,1,2};
    int ans=findKthRot(arr);
    cout<<ans;
    return 0;
}
