#include<bits/stdc++.h>

using namespace std;

int solution(vector<int>&heights){
    int n=heights.size();
    int lp=0;
    int rp=n-1;
    int maxWater=0;
    while(lp<rp){
        int w=rp-lp;
        int ht=min(heights[lp],heights[rp]);
        int area=w*ht;
        maxWater=max(area,maxWater);
        heights[lp]<heights[rp]?lp++:rp--;
    }
    return maxWater;
}

int main(){
    vector<int>heights={1,8,6,25,4,8,3,7};
    int res=solution(heights);
    cout<<res;
    return 0; 
}
