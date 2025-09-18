#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    int l=0;
    int r=s.size()-1;
    while(l<r){
        if(s[l++]!=s[r--]) return false;
    }
    return true;
}

int main(){
    string s="namanw";
    bool res=isPalindrome(s);
    cout<<res;
    return 0;
}
