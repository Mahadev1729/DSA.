#include<bits/stdc++.h>

using namespace std;

vector<int> remove_ele(vector<int>&arr, int target){
    int n=arr.size();
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=target){
            temp.push_back(arr[i]);
        }
    }
    return temp;
}

int main(){
  vector<int>ans;
  vector<int>temp={1,24,5,24,78,90};
  ans=remove_ele(temp,24);
  for(auto it:ans){
    cout<<it<<" ";
  }
  return 0;
}
