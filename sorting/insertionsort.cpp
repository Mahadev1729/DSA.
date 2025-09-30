#include<bits/stdc++.h>

using namespace std;

void printArray(vector<int>&arr){
    for(auto it:arr){
        cout<<it<<" ";
    }
}

void insertionSort(vector<int>&nums,int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && nums[j-1]>nums[j]){
            swap(nums[j-1],nums[j]);
            j--;
        }
    }

    printArray(nums);
}

int main(){
vector<int>a={14,9,15,12,6,8,13};
insertionSort(a,a.size());
return 0;
}
