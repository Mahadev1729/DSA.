#include<bits/stdc++.h>

using namespace std;

string solve(vector<string>s){
    sort(s.begin(),s.end());
    string first=s.front();
    string last=s.back();
    string res;
    for(int i=0;i<min(first.length(),last.length());i++){
        if(first[i]==last[i]){
            res+=first[i];
        }else{
            break;
        }
    }
    return res;
}

int main(){
    vector<string>s={"flood","flower","flow"};
    string ans=solve(s);
    cout<<ans;
    return 0;
}
