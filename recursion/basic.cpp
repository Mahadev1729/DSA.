#include<iostream>
using namespace std;

void print(int n){
    if(n>0){
        print(n-1);
        cout<<n<<endl;
    }
}
int main(){
    print(5);
    return 0;
}
