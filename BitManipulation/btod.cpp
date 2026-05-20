#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=1000;
    int temp=n;
    int i=0;
    int decimal=0;
    while(temp!=0){
        int rem=temp%10;
        decimal+=rem*pow(2,i);
        i++;
        temp/=10;
    }

    cout<<decimal;
    return 0;
}
