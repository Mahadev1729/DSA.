#include<bits/stdc++.h>

using namespace std;

int secondLargest(vector<int>&arr){
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    for(auto x:arr){
        if(x>largest){
            secondLargest=largest;
            largest=x;
        }else{
            secondLargest=x;
        }
    }
    return (secondLargest!=INT_MIN)?secondLargest:-1;
}

int main(){
   vector<int>arr={2,1,2,4,5,6,7};
   int res=secondLargest(arr);
   cout<<res;
   return 0;
}
