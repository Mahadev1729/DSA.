#include<bits/stdc++.h>

using namespace std;

void hashMap(vector<int>arr){
    map<int,int>mp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<":"<<it.second<<endl;
    }
}

int main(){
    vector<int>nums={1,2,3,1,1,2};
    hashMap(nums);
    return 0;
}
