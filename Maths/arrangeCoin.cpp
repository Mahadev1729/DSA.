#include<bits/stdc++.h>
 
using namespace std;

int solve(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if((n-i)<0) break;
        count++;
        n=n-i;
    }
    return count;
}

int main(){
  int res=solve(5);
  cout<<res;
  return 0;
}
