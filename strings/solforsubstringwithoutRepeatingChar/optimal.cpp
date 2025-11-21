#include<bits/stdc++.h>

using namespace std;

int solve_longestSubstring_withoutrepeatingchar(string s){
    int n=s.size();
    int l=0;
    int r=0;
    int maxLen=INT_MIN;
    vector<int>hash(256,-1);
    while(r<n){
        if(hash[s[r]]!=-1){
            if(hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
        }
        int len=r-l+1;
        maxLen=max(maxLen,len);
        hash[s[r]]=r;
        r++;
    }
    return maxLen;
}

int main(){
    string s="cabdzabcd";
    int res=solve_longestSubstring_withoutrepeatingchar(s);
    cout<<res;
    return 0;
}
