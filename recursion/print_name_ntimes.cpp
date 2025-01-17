#include<iostream>
using namespace std;

void print_name_ntimes(int n){
    if(n==0) return;
    cout<<"Mahadev"<<endl;
    print_name_ntimes(n-1);
}
int main(){
    print_name_ntimes(6);
    return 0;
}
