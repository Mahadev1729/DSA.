#include<iostream>
using namespace std;
// recursion for fibbancci

int fib(int n){
    if(n<=1) return n;
    int last=fib(n-1);
    int  slast=fib(n-2);
    return last+slast;
    // return fib(n-1)+fib(n-2);
}
int main(){
    int res=fib(5);
    cout<<res;
    return 0;
}
