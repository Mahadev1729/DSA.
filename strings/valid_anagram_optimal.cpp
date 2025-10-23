#include<bits/stdc++.h>

using namespace std;


bool solve(string s,string t){
    unordered_map<char,int>mp;
    for(auto it:s){
        mp[it]++;
    }
    for(auto it:t){
        mp[it]--;
    }
    for(auto it:mp){
        if(it.second==0){
            return true;
        }
    }
    return false;
}

int main(){
    string s="eat";
    string t="te";
    bool res=solve(s,t);
    cout<<res;
    return 0;
}
