#include<bits/stdc++.h>
using namespace std;

void hashStringMap(string s){
    int n=s.size();
    map<char,int>mpString;
    for(int i=0;i<n;i++){
        mpString[s[i]]++;
    }
    for(auto it:mpString){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}
int main(){
    string s1="AGHGHDGHAAAAgffffff";
    hashStringMap(s1);
    return 0;
}
