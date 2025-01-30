#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>arr,int l,int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}
int main(){
    vector<int>nums={2,3,1,4,5};
    reverse(nums,0,4);
    for(auto it:nums){
        cout<<it<<" ";
    }
    return 0;

}
