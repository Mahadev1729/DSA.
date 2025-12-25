#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>&nums,int k){
    int n=nums.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==k) count++;
        }
    }
    return count;
}

int main(){
    vector<int>arr={12,3,4,5,10};
    int res=solve(arr,15);
    cout<<res;
    return 0;
}
