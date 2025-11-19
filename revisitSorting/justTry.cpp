#include<bits/stdc++.h>

using namespace std;

string freqString(string s){
    string frequency="";
    int count=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1] && i+1<s.size()){
            count++;
        }else{
            frequency+=s[i];
            frequency+=to_string(count);
            count=1;
        }
    }
}

int main(){
    string s="aabbccd";
    string res=freqString(s);
    for(char it:res){
        cout<<it; 
    }
    return 0;
}
