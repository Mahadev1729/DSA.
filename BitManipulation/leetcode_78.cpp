#include<bits/stdc++.h>

using namespace std;

// number of powerset=2**n 
// using bit mainpulation


vector<int> powerset(vector<int>arr){
    int n=arr.size();
    subset=1<<n;
    vector<int>ans;
    for(int num=0;nums<subset-1;num++){
        vector<int>list={};
        for(int i=0;i<n;i++){
            if((num&(1<<i))){
                list.push_back(arr[i]);
            }
        }
        ans.push_back(list);
    }
    return ans;
    
}

int main(){
    vector<int>arr={12,23,34,56};
    vector<int>res=powerset(arr);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}
