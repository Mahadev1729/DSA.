#include<bits/stdc++.h>

using namespace std;

int reverse(int n){
    int reverse=0;
    while(n!=0){
        int lastDigit=n%10;
        reverse=reverse*10+lastDigit;
        n/=10;
    }
    return reverse;
}

int main(){
    int res=reverse(122);
    cout<<res;
    return 0; 
}
