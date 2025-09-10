// arr=[5,3,2,4,1]
// i<j && arr[i]>arr[j];

#include<bits/stdc++.h>

using namespace std;

int count_inversion(vector<int>arr){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i<j && arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
  vector<int>nums={5,3,2,4,1};
  int res=count_inversion(nums);
  cout<<res;
  return 0;
}
