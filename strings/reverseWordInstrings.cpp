#include<bits/stdc++.h>

using namespace std;

// input:"the sky is blue"
// outpur:"blue is sky the"

// process 
// 1-reverse the whole string
// "the pen"
// "nep eht"


string solve(string s){
    int n=s.length();
    string ans="";
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }reverse(word.begin(),word.end());
        if(word.length()>0){
        ans+=" "+word;
      }
    }
   
   return ans;
}

int main(){
    string s1="  Hello World  ";
    string res=solve(s1);
    cout<<res;
    return 0;
}
