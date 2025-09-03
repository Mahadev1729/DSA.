#include<bits/stdc++.h>

using namespace std;


vector<int> missing_rep(vector<int>&arr){
    int n=arr.size();
    vector<int>hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int rep=-1,miss=-1;
    for(int i=1;i<=n;i++){
        if(hash[i]==2) rep=i;
        else if(hash[i]==0) miss=i;

        if(rep!=-1 && miss!=-1){
            break;
        }
    }
    return {rep,miss};
}


int main() {
    vector<int> nums = {4, 3, 6, 2, 1, 1};
    vector<int> res = missing_rep(nums);
    for (auto it : res) {
        cout << it << " ";
    }
    return 0;
}
