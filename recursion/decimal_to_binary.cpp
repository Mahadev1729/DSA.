#include<bits/stdc++.h>

using namespace std;

void decimal_to_binary(int n, string &s){
    if(n==0){
        return ;
    }
    decimal_to_binary(n/2,s);
    s+=to_string(n%2);
}

int main(){
   int n=57;
   string res;
   decimal_to_binary(n,res);
   cout<<res;
   return 0;
}
