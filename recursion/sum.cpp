#include<iostream>
using namespace std;

void sumof(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    sumof(i-1,sum+i);
}

int main(){
    int n=3;
    sumof(n,0);
    return 0;
}
