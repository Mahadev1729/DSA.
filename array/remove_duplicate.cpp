#include<bits/stdc++.h>

using namespace std;

int remove_duplicate(vector<int>&nums){
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            return nums[i];
            break;
        }
    }
    return -1;
}

int main(){
   vector<int>arr={1,2,2,3,4};
   int ans=remove_duplicate(arr);
   cout<<ans;
   return 0;
}
