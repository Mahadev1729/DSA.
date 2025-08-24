#include<bits/stdc++.h>
using namespace std;

void permuate_array(vector<int>&nums,int index,vector<vector<int>>&result){
    if(index==nums.size()){
         result.push_back(nums);
         return;
    }
    for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        permuate_array(nums,index+1,result);
        swap(nums[index],nums[i]);
    }
    
}

int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>res;
    permuate_array(nums,0,res);

    sort(res.begin(),res.end());
    for(const auto& row:res){
        for(const auto& elem:row){
            cout<<elem;
        }
        cout<<endl;
    }
    return 0;
}
