#include<bits/stdc++.h>

using namespace std;

string solve(string &s){
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }else{
            s[i]=toupper(s[i]);
        }
    }
    return s;
}

int main(){
    string s="Python";
    string res=solve(s);
    cout<<res;
    return 0;

}
