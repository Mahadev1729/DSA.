#include<bits/stdc++.h>

using namespace std;

int solve(string &s){
    unordered_map<char,int>freq;
    int left=0;
    int maxLen=INT_MIN;
    int n=s.length();
    for(int right=0;right<n;right++)
    {
        char c=s[right];
        if(freq.count(c) && freq[c]>=left){
            left=freq[c]+1;
        }
        freq[c]=right;
        maxLen=max(maxLen,right-left+1);

    }
    return maxLen;
}

int main(){
    string s="Mahadev";
    int res=solve(s);
    cout<<res;
    return 0;
}
