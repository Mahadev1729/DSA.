#include<bits/stdc++.h>

using namespace std;
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int maxArea=INT_MIN;
        while(l<r){
            int area=min(height[l],height[r])*(r-l);
            maxArea=max(area,maxArea);
            if(height[l]<height[r])
              l++;
            else
              r--;
        }
        return maxArea;
    }

int main(){
  vector<int>nums={3,2,1,4,5,7,8,9};
  int res=maxArea(nums);
  cout<<res;
  return 0;
}    
