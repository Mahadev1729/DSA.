#include<bits/stdc++.h>

using namespace std;


bool isSum_Equal(vector<int>&arr,int K){
    int sum_arr=0;
    for(int it:arr){
        sum_arr+=it;
    }
    return (sum_arr==K);
}

int count_subarray_with_sumK(vector<int>&arr,int k){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=i;j<n;j++){
            temp.push_back(arr[j]);
            if(isSum_Equal(temp,k)==true){
                count++;
            }
        }
    }
    return count;
}


int main(){
  vector<int>nums={1,2,3,-3,1,1,1,4,2,-3};
  int res=count_subarray_with_sumK(nums,3);
  cout<<res;
  return 0;

}
