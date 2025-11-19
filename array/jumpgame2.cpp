#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>&arr){
    int l=0;
    int r=0;
    int jumps=0;
    int n=arr.size();
    while(r<n-1){
        int far=0;
        for(int i=l;i<=r;i++){
            far=max(i+arr[i],far);
        }
        l=r+1;
        r=far;
        jumps++;
    }
    return jumps;
}

int main(){
    vector<int>nums={2,3,1,1,4};
    int res=solve(nums);
    cout<<res;
    return 0;
}
