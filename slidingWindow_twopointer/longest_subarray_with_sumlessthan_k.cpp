#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>arr={2,5,1,7,10};
    int n=arr.size();
    int k=14;
    int maxLength=0;
    for(int i=0;i<=n-1;i++){
        int sum=0;
        for(int j=i;j<=n-1;j++){
           if(sum<=k){
            maxLength=max(maxLength,j-i+1);
           }
           else if(sum>k){
            break;
           }
        }
        
    }
    cout<<maxLength;
    return 0;
}
