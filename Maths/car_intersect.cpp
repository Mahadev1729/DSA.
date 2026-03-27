#include<bits/stdc++.h>

using namespace std;

int car_intersect(vector<vector<int>>&nums){
    unordered_set<int>st;
    for(auto x:nums){
        int start=x[0];
        int end=x[1];
        for(int i=start;i<=end;i++){
            st.insert(i);
        }
    }
    return st.size();
}

int main(){
    vector<vector<int>>v={
        {2,3},
        {1,7},
        {4,9}
    };
    int res=car_intersect(v);
    cout<<res;
    return 0;
}
