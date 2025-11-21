#include<bits/stdc++.h>

using namespace std;


bool isUnique(const string &sr) {
    unordered_map<char, int> freq;
    for (char c : sr) {
        freq[c]++;
        if (freq[c] > 1) {
            return false;
        }
    }
    return true;
}
int  solve(string s){
    // try to generate all possible substring
    int n=s.length();
    int maxLen=INT_MIN;
    for(int i=0;i<n;i++){
        string temp="";
        for(int j=i;j<n;j++){
            temp+=s[j];
            if(isUnique(temp)==true){
               maxLen=max(maxLen,(int)temp.size());
            }
        }
    }
    return maxLen;
}

int main(){
   string s="cadbzabcd";
   int res=solve(s);
   cout<<res;
   return 0;
}
