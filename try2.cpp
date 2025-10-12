#include<bits/stdc++.h>

using namespace std;

int main(){
    int count=0;
    int n=13;
    while(n!=0){
        int rem=n%2;
        if(rem==1) count++;
        n/=2;
    }
    cout<<count;
    return 0;
}
