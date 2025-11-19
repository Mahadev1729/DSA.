#include<bits/stdc++.h>

using namespace std;
 

int solve(vector<int>&arr,int T, int K){
    int n=arr.size();
    int l=0;
    int r=K-1;
    int sum=0;
    int count=0;
    for(int i=0;i<K;i++){
        sum+=arr[i];
    }
    if(sum>T) count++;
    while(r<arr.size()){
        sum-=arr[l++];
        r++;
        sum+=arr[r];
        if(sum>T) count++;
    }
    return count;
}

int main(){
   vector<int>arr={1,2,3,2,4,5,6};
   int res=solve(arr,5,3);
   cout<<res;
   return 0;
}
