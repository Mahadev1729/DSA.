#include<bits/stdc++.h>
using namespace std;
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
       int lsum=0;
       int rsum=0;
       int maxSum=0;
       for(int i=0;i<k-1;i++){
        lsum+=cardPoints[i];
       maxSum=lsum;
       }
       int rindx=n-1;
       for(int i=k-1;i>=0;i--){
        lsum-=cardPoints[i];
        rsum+=cardPoints[rindx];
        rindx--;
        maxSum=max(maxSum,rsum+lsum);
       }
      return maxSum;
    }
       
int main(){
    vector<int>arr={12,11,3,4,7,8,9};
    int res=maxScore(arr,2);
    cout<<res;
    return res;
}
