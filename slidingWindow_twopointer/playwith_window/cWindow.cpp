#include<bits/stdc++.h>

using namespace std;

int constWindow(vector<int>arr,int k){
    int n=arr.size();
    int l=0,r=k-1;
    int sum=0;
    int maxSum=INT_MIN;
    // for(auto it:arr){
    //     sum+=it;
    // }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    while(r<n-1){
        sum-=arr[l];
        l++;
        r++;
        sum+=arr[r];
        maxSum=max(maxSum,sum);
    }
    return maxSum;

}

int main(){
    vector<int>nums={1,2,3,4,5,6};
    int res=constWindow(nums,4);
    cout<<res;
    return 0;
}
