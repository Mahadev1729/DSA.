#include<bits/stdc++.h>

using namespace std;

void common_pattern(int index,int current_sum,vector<int>ds,int target,vector<vector<int>>&result, vector<int>nums){
    int n=nums.size();
    if(index==n){
        if(current_sum==target){
            result.push_back(ds);
        }
        return;
    }
    ds.push_back(nums[index]);
    common_pattern(index+1,current_sum+nums[index],ds,target,result,nums);
    ds.pop_back();
    common_pattern(index+1,current_sum,ds,target,result,nums);
}

int main(){
    vector<int>arr={1,2,1,-1,2,3,0};
    vector<vector<int>>res;
    vector<int>ds;
    common_pattern(0,0,ds,2,res,arr);
    for(const auto& subseq:res){
        for(auto num:subseq){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}
