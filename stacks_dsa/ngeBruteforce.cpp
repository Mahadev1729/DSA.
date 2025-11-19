// arr=[6,0,8,1,3];
// output=[8,8,-1,3,-1];
#include<bits/stdc++.h>

using namespace std;

vector<int> nge(vector<int>&arr){
    int n = arr.size();
    vector<int> ans(n, -1); 

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                ans[i] = arr[j];
                break;  
            }
        }
    }
    return ans;
}

int main(){
   vector<int>nums={6,0,8,1,3};
   vector<int>res=nge(nums);
   for(int it:res){
    cout<<it<<" ";
   }
   return 0;
}
