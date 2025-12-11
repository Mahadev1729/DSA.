#include<bits/stdc++.h>

using namespace std;

//brute force

vector<int> next_Greater_Ele(vector<int>&arr){
   vector<int>nge(arr.size(),-1);
   int n=arr.size();
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[i]){
            nge[i]=arr[j];
            break;
        }
      }
   }
   return nge;
}
int main(){
    vector<int>arr={6,0,8,1,3};
    vector<int>res=next_Greater_Ele(arr);
    for(int it:res){
        cout<<it<<" ";
    }
    return 0;
}
