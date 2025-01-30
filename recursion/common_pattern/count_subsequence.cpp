#include<iostream>
#include<vector>
using namespace std;
int solve(int i,vector<int>&ds,int s,int target,vector<int>nums){
    if(i==nums.size()){
        if(s==target) return 1;
        else return 0;
    }
    ds.push_back(nums[i]);
    s+=nums[i];
    int l=solve(i+1,ds,s,target,nums);
    ds.pop_back();
    s-=nums[i];
    int r=solve(i+1,ds,s,target,nums);
    return l+r;
}
int main(){
   vector<int>arr={1,2,1,1,3,4,5};
   vector<int>ds;
   int sum=5;
   int count=solve(0,ds,0,sum,arr);
   cout<<count;
   return 0;
}
