#include<bits/stdc++.h>

using namespace std;


bool solve(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int>nums={1,2,3,2,4,5,6};
    bool res=solve(nums);
    cout<<res;
    return 0;
}
