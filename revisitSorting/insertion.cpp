#include<bits/stdc++.h>

using namespace std;

void insertionSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(auto it:arr){
       cout<<it<<" ";
    }
}

int main(){
   vector<int>arr={9,14,15,12,6,8,13};
   insertionSort(arr);
   return 0;
}
