#include<bits/stdc++.h>

using namespace std;

string sortByfreq(string s){
    vector<int>freq(128,0);
    for(auto ch:s) freq[ch]++;

    auto cmp=[&](char a,char b){
        if(freq[a]==freq[b]) return a<b;
        return freq[a]>freq[b];
    };

    sort(s.begin(),s.end(),cmp);
    return s;
}

int main(){
    string s="tree";
    string ans=sortByfreq(s);
    cout<<ans;
    return 0;
}
