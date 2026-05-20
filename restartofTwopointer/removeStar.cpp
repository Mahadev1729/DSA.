#include<bits/stdc++.h>

using namespace std;

string  solve(string &s){
    string stack="";
    for(auto ch:s){
        if(ch=='*'){
            if(!stack.empty()){
                stack.pop_back();
            }
        }else{
            stack.push_back(ch);
        }
    }
    return stack;
}

int main(){
    string s="rrhj***fhrjfkjf**";
    string res=solve(s);
    cout<<res;
    return 0;
}

 