#include<bits/stdc++.h>

using namespace std;

int main(){
    stack<int>st;
    st.push(30);
    st.push(45);
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}
