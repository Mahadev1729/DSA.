#include<bits/stdc++.h>

using namespace std;

bool validAnograms(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    return (s==t);
}

int main(){
    string s="naman";
    string t="amnan";
    bool flag=validAnograms(s,t);
    cout<<flag;
    return 0;
}
