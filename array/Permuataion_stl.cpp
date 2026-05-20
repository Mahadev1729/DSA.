#include<bits/stdc++.h>

using namespace std;

vector<vector<int>>solve(vector<int>&nums){
    vector<vector<int>>result;
    sort(nums.begin(),nums.end());
    do{
        result.push_back(nums);
    }while(next_permutation(nums.begin(),nums.end()));

    return result;
}

int main(){
    vector<int>arr={1,2,3};
    vector<vector<int>>res=solve(arr);
    for(auto it:res){
        for(int x:it){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


