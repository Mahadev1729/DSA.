#include<bits/stdc++.h>

using namespace std;

char solve(string &s){
    vector<int>v(26,0);
    char ans;
    for(int i=0;i<s.size();i++){
        int a=s[i]-97;
        v[a]++;
    }
    int m=-1;

    for(int i=0;i<v.size();i++){
       if(m<v[i]){
        m=v[i];
        ans=(char)(i+97);
       }
    }
    return ans;

}

int main(){
   string s="mahadeve";
   char c=solve(s);
   cout<<c;
   return 0;
}
