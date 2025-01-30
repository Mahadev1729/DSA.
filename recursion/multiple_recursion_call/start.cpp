#include<iostream>
using namespace std;
// recursion for fibbancci

int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    int res=fib(5);
    cout<<res;
    return 0;
}
