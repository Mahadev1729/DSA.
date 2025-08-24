#include<bits/stdc++.h>

using namespace std;

int countSubArray(vector<int>arr,int k){
    int n=arr.size();
    int countSubArray=0;
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k) count++;
           
        }
        
    }
    return count;
}


int main(){
    vector<int>nums={1,2,3,-3,1,1,1,4,2,-3};
    int res=countSubArray(nums,3);
    cout<<res;
    return 0;
}
