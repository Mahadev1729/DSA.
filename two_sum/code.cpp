#include<bits/stdc++.h>

using namespace std;


vector<int> two_sum(vector<int>arr,int target){
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        int rem=target-arr[i];
        if(mp.count(rem)){
            return {mp[rem],i};
        }
        mp[arr[i]]=i;
    }
    return {};
}

int main(){
    vector<int>nums={2,5,6,8,11};
    vector<int>res;
    res=two_sum(nums,14);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}
