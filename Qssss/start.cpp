#include<bits/stdc++.h>

using namespace std;


int main(){
    queue<int>qu;
    qu.push(56);
    qu.push(57);
    qu.push(78);
    cout<<qu.size()<<endl;
    qu.pop();
    qu.pop();
    cout<<qu.front()<<endl;
    cout<<qu.size()<<endl;
    cout<<qu.empty()<<endl;
    cout<<qu.back()<<endl;
    return 0;
}
