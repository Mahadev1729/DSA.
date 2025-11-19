

#include<bits/stdc++.h>
#include<string>
using namespace std;

// input=leet**cod*e
// output=lecoe

string removeStar(string s){
    int i=0,j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='*'){
            j--;
        }else{
            s[j++]=s[i];
        }
    }
    return s.substr(0,j);
}

int main(){
    string input="leet**code*e";
    string s=removeStar(input);
    cout<<s;
    return 0;
}
