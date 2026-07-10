#include<bits/stdc++.h>

using namespace std;

template<typename T>

void display(T value){
    cout<<"Generic:"<<value<<endl;
}

template<>
void display<char>(char value){
    cout<<"Character:"<<value<<endl;
}
int main(){
   display(10);
   display('A');
   return 0;
}
