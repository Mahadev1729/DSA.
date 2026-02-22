#include<bits/stdc++.h>

using namespace std;


int solve_water(vector<int>&nums){
    int n=nums.size();
    int totalWater=0;
    for(int i=0;i<n;i++){
        int leftMax=0;
        int rightMax=0;
        for(int j=0;j<=i;j++){
            leftMax=max(leftMax,nums[j]);
        }
        for(int j=i;j<n;j++){
            rightMax=max(rightMax,nums[j]);
        }
        int water=min(leftMax,rightMax)-nums[i];
        if(water>0) totalWater+=water;
    }
    return totalWater;
}

int main(){
    vector<int>arr={4,2,0,3,2,5};
    cout<<solve_water(arr);
    return 0;
}
