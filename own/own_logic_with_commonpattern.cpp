#include<bits/stdc++.h>

using namespace std;

void solve_subarray_sum(int index,int current_sum,vector<int>ds,int target,vector<vector<int>>&result,vector<int>nums){
    int n=nums.size();
    if(index==n){
        if(current_sum==target){
            result.push_back(ds);
        }
        return ;
    }
    ds.push_back(nums[index]);
    solve_subarray_sum(index+1,current_sum+nums[index],ds,target,result,nums);
    ds.pop_back();
    solve_subarray_sum(index+1,current_sum,ds,target,result,nums);
}

int main(){
    vector<int>arr={2,1,-1,3,4};
    vector<vector<int>>res;
    vector<int>ds;
    solve_subarray_sum(0,0,ds,0,res,arr);
    for(const auto& subseq:res){
        
            for(auto num:subseq){
                cout<<num<<" ";
            }   
            cout<<endl;
        }
    return 0;
}
