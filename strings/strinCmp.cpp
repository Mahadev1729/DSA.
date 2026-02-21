#include<bits/stdc++.h>

using namespace std;

// "1133332233556";

string solve(string &s){
    int count=1;
    string res="";
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
           res+=to_string(count)+s[i-1];
           count=1;
        }
    }
    res+=to_string(count)+s[s.length()-1];
    return res;
}

int main(){
    string s="113332233556";
    cout<<solve(s);
    return 0;

}
