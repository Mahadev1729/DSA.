#include<bits/stdc++.h>

using namespace std;

bool solveISCaptial(string &s){
    int n=s.length();
    int capitalCount=0;
    for(auto ch:s){
        if(isupper(ch)){
            capitalCount++;
        }
    }
    if(capitalCount==n) return true;
    if(capitalCount==0) return true;
    if(capitalCount==1 && isupper(s[0])) return true;

    return false;
}

int main(){
     string s="DSA";
     bool res;
     res=solveISCaptial(s);
     cout<<res;
     return 0;
}
