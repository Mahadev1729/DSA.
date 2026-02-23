#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>&heights){
    int n=heights.size();
    int maxWater=0;
    for(int i=0;i,n;i++){
        for(int j=i+1;j<n;i++){
            int width=j-i;
            int height=min(heights[i],heights[j]);
            int area=width*height;
            maxWater=max(area,maxWater);
        }
    }
    return maxWater;
}

int main(){
    vector<int>nums={1,8,6,25,4,8,3,7};
    int res=solve(nums);
    cout<<res;
    return 0;
}
