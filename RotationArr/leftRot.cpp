#include<bits/stdc++.h>

using namespace std;

vector<int> rightRotation(vector<int>&arr,int k){
    int n=arr.size();
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    return temp;
}

int main(){
    vector<int>arr={3,2,1,4,5};
    vector<int>res;
    res=rightRotation(arr,2);
    for(int it:res){
        cout<< it<<" ";
    }
    return 0;
}
