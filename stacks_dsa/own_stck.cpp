#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
vector<int>minArr;

void push(int x){
    arr.push_back(x);
}
int top(){
    return arr.back();
}
void pop(){
    if(arr.empty()){
        cout<<"Stack underflow";
    }
    arr.pop_back();
}
void display(){
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int getMin() {
    if (minArr.empty()) {
        cout << "Stack is empty\n";
        return -1; // or some sentinel value
    }
    return minArr.back();
}
int main(){
  push(34);
  push(23);
  pop();
  display();
  cout<<getMin()<<endl;
  return 0;
}
