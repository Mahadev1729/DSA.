#include<bits/stdc++.h>

using namespace std;
//left rotation
void reversal_algo_left(vector<int>arr,int k){
    int n=arr.size();
    k%=n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

    for(int it:arr){
        cout<<it<<" ";
    }
}
void reversal_algo_right(vector<int>arr,int k){
    int n=arr.size();
    k%=n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    for(int it:arr){
        cout<<it<<" ";
    }
}

int main(){
    vector<int>arr={4,5,6,7,8};
    // reversal_algo(arr,3);
    reversal_algo_right(arr,3);
    return 0;
}
