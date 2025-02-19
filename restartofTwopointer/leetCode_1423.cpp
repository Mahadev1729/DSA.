class Solution {
public:
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
        rindx=rindx-1;
        maxSum=max(maxSum,rsum+lsum);
       }
      return maxSum;
       
    }
};
