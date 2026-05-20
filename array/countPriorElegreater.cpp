#include<bits/stdc++.h>

using namespace std;
int solve(vector<int>&nums){
    int count=1;
    int maxi=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(maxi<nums[i]){
            maxi=nums[i];
            count++;
        }
    }
    return count;
}

int main(){
    vector<int>nums={7,4,8,2,5};
    int res=solve(nums);
    cout<<res;
    return 0;
}
