#include<iostream>
#include<vector>
#include<sort>
using namespace std;

int binarySearch(vector<int>nums, int target){
   
    int n=nums.size();
    int l=0;
    int r=n-1;
    while(l<=r){
        mid=(l+r)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
}

int main(){
    vector<int>arr={23,45,12,56,78};
    sort(arr.begin(),arr.end());
    int res=binarySearch(arr,56);
    cout<<res;
    return 0;
}
