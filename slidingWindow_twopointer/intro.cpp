#include<iostream>
#include<vector>

using namespace std;

int main(){
      vector<int>arr={-1,2,3,3,4,5,-1};
      int n=arr.size();
      vector<int>res;
      int k=4;
      int l=0;
      int r=k-1;
      int sum=0;
      int maxSum=-1;
      for(l=0;l<=r;l++){
        sum+=arr[l];
      }
      cout<<sum<<endl;

      while(r<n-1){
       sum=sum-arr[l];
       l++;
       r++;
       sum=sum+arr[r];
       if(maxSum<sum){
        maxSum=sum;
       }
      }
      cout<<maxSum;
      return 0;
    //    while (r<n-1)
    //    {
        
    //    }
}
