#include<bits/stdc++.h>

using namespace std;

void solve(string s){
    unordered_map<char,int>mpp;
    for(auto ch:s){
        mpp[ch]++;
    }

    for(auto it:mpp){
        cout<<it.first<<":"<<it.second<<endl;
    }
}

int main(){
    string s="Mahadev";
    solve(s);
    return 0;
}
