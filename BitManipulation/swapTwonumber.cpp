#include<bits/stdc++.h>

using namespace std;
int main(){
    int a=3,b=2;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a:"<<a;
    cout<<endl;
    cout<<"b:"<<b;
    return 0;
}
