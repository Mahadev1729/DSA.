#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int didSwap=0;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            didSwap=1;
            }
        }
        if(didSwap==0){
            break;
        }
    }
    for(auto it:arr){
        cout<<it<<" ";
    }
}

int main(){
    vector<int>arr={23,45,12,34};
    bubbleSort(arr);
    return 0;
}
