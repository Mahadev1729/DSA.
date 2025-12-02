#include<bits/stdc++.h>

using namespace std;

int minOperation(vector<int>&arr,int k){
    int n=arr.size();
    int sum=0;
    int count=0;
    for(auto it:arr){
        sum+=it;
    }
    if(sum%k==0) count=0;

    else{
        count=sum%k;
    }

    return count;
}

int main(){
    vector<int>arr={3,9,7};
    int res=minOperation(arr,5);
    cout<<res;
    return 0;
}
