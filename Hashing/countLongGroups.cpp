#include<bits/stdc++.h>

using namespace std;

int findDigitSum(int val){
    int temp=val;
    int sum=0;
    while(val!=0){
        sum+=val%10;
        val/=10;
    }
    return sum;
}

int solve(int n){
   unordered_map<int,int>mpp;
   int maxsize=0;
   int count=0;
   for(int num=1;num<=n;num++){
    int digitSum=findDigitSum(num);
    mpp[digitSum]++;
    if(mpp[digitSum]==maxsize){
        count++;
    }
    else if(mpp[digitSum]>maxsize){
        maxsize=mpp[digitSum];
        count=1;
    }
   }
   return count;
}

int main(){
   int res=solve(11);
   cout<<res;
   return 0;
}
