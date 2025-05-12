#include<bits/stdc++.h>

using namespace std;

bool string_matching(string s,string t){
    int sp=0;
    int tp=0;

    while(sp<s.length() && tp<t.length()){
        if(s[sp]==t[tp]){
            sp++;
        }
        tp++;
    }
    return sp==t.length();
}

int main(){
    string start="abecd";
    string goal="abd";
    bool res=string_matching(start,goal);
    cout<<res;
    return 0;
}
