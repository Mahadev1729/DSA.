#include<bits/stdc++.h>

using namespace std;


int nth_root(int m,int n){
   for(int i=1;i<m;i++){
    if(pow(i,n)==m){
        return i;
    }
    else if (pow(i,n)>m) break;
    
   }
   return -1;
}

int main(){
    int res=nth_root(3,27);
    cout<<res;
    return 0;
}
