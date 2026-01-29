#include<bits/stdc++.h>

using namespace std;


int longest_subarr_with_sumK(vector<int>&arr,int k){
    int maxLen=INT_MIN;
    unordered_map<int,int>preSumMap;
    int n=arr.size();
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        int rem=sum-k;
        if(preSumMap.count(rem)){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        preSumMap[sum]=i;
    }
    return maxLen;
}
int main(){
    vector<int>arr={1,2,3,-3,1,1,1,4,2,-3};
    int res=longest_subarr_with_sumK(arr,3);
    cout<<res;
    return 0;
}
