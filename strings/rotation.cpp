#include<bits/stdc++.h>

using namespace std;

bool solve(string s,string goal){
    int m=s.length();
    int n=goal.length();
    if(m!=n) return false;
    return (s+s).find(goal)!=string::npos;
}
int main(){
    string s="abcde";
    string g="cdeab";
    cout<<solve(s,g);
    return 0;
}
