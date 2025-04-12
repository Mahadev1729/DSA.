#include<bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
            if (m.count(a)) {
                res.push_back(a);
                m.erase(a);
            }
        return res;
}

int main(){
    vector<int>ans;
    vector<int>arr1={1,2,24,3,4};
    vector<int>arr2={24,4,5,6,7};
    ans=intersection(arr1,arr2);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}
