#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
vector<int>minArr;

void push(int x) {
    arr.push_back(x);
    if (minArr.empty() || x < minArr.back()) {
        minArr.push_back(x);
    } else {
        minArr.push_back(minArr.back());
    }
}
int top(){
    return arr.back();
}
void pop() {
    if (arr.empty()) {
        cout << "Stack underflow\n";
        return;
    }
    arr.pop_back();
    minArr.pop_back();
}
void display(){
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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

  display();
  cout<<getMin()<<endl;
  return 0;
}
