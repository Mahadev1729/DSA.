#include<bits/stdc++.h>

using namespace std;
int N=100;
int stack[N];
int top=-1;


void push(int val){
    if(top>N-1){
        cout<<"stack overflow";
    }
    top++;
    stack[top]=val;
}

void pop(){
    if(top==-1){
        cout<<"Stack underflow";
    }
    int data=stack[top];
    top--;
}
void display(){
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
}

int main(){
    push(34);
    push(67);
    push(90);
    display();

    return 0;
}
