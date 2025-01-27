#include<iostream>
#include<vector>
using namespace std;

int buy_and_sell(vector<int>arr){
    int n=arr.size();
    int maxPro=0;
    int minPrice=0;
    for(int i=0;i<n;i++){
        minPrice=min(minPrice,arr[i]);
        maxPro=max(maxPro,arr[i]-minPrice);
    }
    return maxPro;
}
int main(){
    vector<int>nums={7,1,5,3,6,4};
    int res=buy_and_sell(nums);
    cout<<res;
    return 0;
}
