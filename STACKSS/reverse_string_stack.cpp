#include<bits/stdc++.h>

using namespace std;

string reverse_stack(string input){
    stack<char>st;
    string res="";
    for(char ch:input){
        st.push(ch);
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}


int main(){
   string s="Mahadev";
   string ans=reverse_stack(s);
   cout<<ans;
   return 0;
}
