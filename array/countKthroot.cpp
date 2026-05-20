#include<bits/stdc++.h>

using namespace std;

int solve_root_K(int l,int r,int k){
    int count=0;
    int start=1;
    for(int i=l;i<=r;i++){
        if(pow(start,k)==i){
            count++;
            start++;
        }
        
    }
    return count;
}    


int main(){
  int res=solve_root_K(1,9,3);
  cout<<res;
  return 0;
}
