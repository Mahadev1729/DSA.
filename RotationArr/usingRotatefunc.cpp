#include<bits/stdc++.h>

using namespace std;

vector<int> leftRotation(vector<int>&arr,int k){
    rotate(rbegin(arr),rbegin(arr)+k,rend(arr));
    return arr;
}

vector<int> rightRotation(vector<int>&arr,int k){
  rotate(begin(arr),begin(arr)+k,end(arr));
  return arr;
}


int main(){
  vector<int>nums={12,3,4,5};
  vector<int>resL=leftRotation(nums,2);
  for(int it:resL){
    cout<<it<<" ";
  }
  cout<<endl;
  vector<int>resR=rightRotation(nums,2);
  for(int it:resR){
    cout<<it<<" ";
  }
  return 0;
}
