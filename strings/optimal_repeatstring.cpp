#include<bits/stdc++.h>

using namespace std;

int optimal_wth_repeatstring(string s){
  vector<int>hash(256,-1);
  int n=s.size();
  int l=0;
  int r=0;
  int maxLen=0;
  while(r<n){
    if(hash[s[r]]!=-1){
        if(hash[s[r]]>=l){
            l=hash[s[r]]+1;
        }
    }
    maxLen=max(maxLen,r-l+1);
    hash[s[r]]=r;
    r++;
  }
  return maxLen;
}

int main(){
 string s="cadbzabcd";
 int res=optimal_wth_repeatstring(s);
 cout<<res;
 return 0;
}
