#include<iostream>
#include<vector>

int binarySearch(vector<int>nums,int target){
    int n=nums.size();
    int l=0;
    int r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            l=
        }
    }
}
