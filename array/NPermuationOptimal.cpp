#include<bits/stdc++.h>

using namespace std;

int find_pivot_ele(vector<int>&arr){
    int piv=-1;
    int n=arr.size();
    for(int n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            piv=i;
            break;
        }
    }
    if(piv==-1){
        /// reverse array
        return ;
    }

}
int find_right_most_ele(vector<int>&nums){
    int n=nums.size();
    for(int i=n-1;i>pivot;i--){
         if(nums[i]>nums[pivot]){
            swap(nums[i],nums[pivot]);
         }
    }
}

int main(){

}
