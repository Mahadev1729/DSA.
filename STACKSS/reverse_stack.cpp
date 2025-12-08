#include<bits/stdc++.h>

using namespace std;

stack<int> reverse_stack(stack<int>&s){
    stack<int>aux;
    while(!s.empty()){
        aux.push(s.top());
        s.pop();
    }
    return aux;

}
  
int main(){
    stack<int>s_input;

    s_input.push(30);
    s_input.push(45);
    s_input.push(34);
    s_input.push(46);
    
    stack<int>s_output;
    s_output=reverse_stack(s_input);
    while(!s_output.empty()){
        cout<<s_output.top()<<endl;
        s_output.pop();
    }
    return 0;
}
