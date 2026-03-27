#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>&nums){
    unordered_map<int,int>freq;
    int maxFreq=INT_MIN;
    int result;
    for(int it:nums){
        freq[it]++;
        if(freq[it]>maxFreq){
            maxFreq=nums[it];
            result=it;
        }
    }
    return result;
}

int main(){
   vector<int>nums={1,2,1,1,1,3};
   int res;
   res=solve(nums);
   cout<<res;
   return 0;
}
