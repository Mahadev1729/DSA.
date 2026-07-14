#include<bits/stdc++.h>

using namespace std;


// vector<int> solve(vector<int>&arr){
//     int n=arr.size();
//     vector<int>nge(n,-1);
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(arr[i]<arr[j]){
//                 nge[i]=arr[j];
//                  break;
//             }     
//         }
        
//     }
//     return nge;
// }
vector<int> solve_optimal(vector<int>&arr)

int main(){
  vector<int>arr={6,0,8,1,3};
  vector<int>res;
  res=solve(arr);
  for(auto it:res){
    cout<<it<<" ";
  }
  return 0;
}


