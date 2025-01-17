#include<iostream>
using namespace std;


void recursive_fun(int cnt){
    if(cnt==4) return;
    cout<<cnt<<endl;
    cnt++;
    recursive_fun(cnt);
}
int main(){
    recursive_fun(0);
    return 0;
}
