#include<bits/stdc++.h>

using namespace std;
// [1,2,3,4,5];
// [1,3,6,10,15]

// subArrSum(i,j)=ps[j]-sp[i];

// ps[n];
// ps[0]=arr[0]
// for(i=1 to n){
//    ps[i]=ps[i-1]+arr[i];
// }

int solve(vector<int>&arr,int k){
    int n=arr.size();
    int count=0;
    unordered_map<int,int>m;
    vector<int>prefixSum(n,0);
    prefixSum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+arr[i];
    }

    for(int j=0;j<n;j++){
        if(prefixSum[j]==k) count++;
        int val=prefixSum[j]-k;
        if(m.find(val)!=m.end()){
            count+=m[val];
        }
        if(m.find(prefixSum[j])==m.end()){
            m[prefixSum[j]]=0;
        }
        m[prefixSum[j]]++;
    }
    return count;
}

int main(){
  vector<int>arr={9,4,20,3,10,5};
  int res=solve(arr,33);
  cout<<res;
  return 0;
}


