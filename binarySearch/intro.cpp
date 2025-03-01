#include<bits/stdc++.h>

using namespace std;

vector<int> binarySearch(vector<int>nums, int target){
    vector<int>res;
    int n=nums.size();
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(nums[mid]==target){
            res.push_back(mid);
        }
        else if(nums[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return res;
}

int main(){
    vector<int>arr={23,45,56,78};
    vector<int>sol;
    int sol=binarySearch(arr,56);
    cout<<sol;
    return 0;
}
