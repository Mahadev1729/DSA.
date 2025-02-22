#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


void count_using_map(vector<int>nums){
    unordered_map<int,int>mp;
    int n=nums.size();
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    for(auto it: mp){
        cout<<it.first<<":"<<it.second<<endl;
    }
}
int main(){
   vector<int>arr={1,2,1,3,2};
   count_using_map(arr);
   return 0;
}
