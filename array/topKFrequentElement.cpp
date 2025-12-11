#include<bits/stdc++.h>

using namespace std;

vector<int> topKFrequentElement(vector<int>&nums,int k){
    unordered_map<int,int>freq;
    for(int x:nums){
        freq[x]++;
    }

    vector<pair<int,int>>arr;
    for(auto &p:freq){
        arr.push_back({p.first,p.second});
    }

    sort(arr.begin(),arr.end(),[](auto &a,auto &b){
        return a.second>b.second;
    });

    vector<int>result;
    for(int i=0;i<k;i++){
        result.push_back(arr[i].first);
    }
    return result;
}

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;

    vector<int> ans = topKFrequentElement(nums, k);

    for (int x : ans) cout << x << " ";

    return 0;
}

