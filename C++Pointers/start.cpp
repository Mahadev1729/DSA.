#include<bits/stdc++.h>

using namespace std;


int main(){
    int a=10;
    int *p=&a;
    int** p2=&p;
    cout<<&p<<endl;
    cout<<p2<<endl;
    cout<<*p<<endl;
    cout<<&a;
    return 0;
}
