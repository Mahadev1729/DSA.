#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int>&nums){
    int n=nums.size();
    vector<int>nge_arr(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums[i]){
            st.pop();
        }
        if(st.empty()) nge_arr[i]=-1;
        else neg_arr[i]=st.top();
        st.push(nums[i]);


        }


    return nge_arr;
}

int main(){
    vector<int>arr={4,12,5,3,1,2,5,3,1,2,4,6};
    vector<int>res=solve(arr);
    for(int it:res){
        cout<<it<<" ";
    }
    return 0;
}
