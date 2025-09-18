#include<bits/stdc++.h>

using namespace std;


string reverse(string s){
    int l=0;
    int r=s.size()-1;
    while(l<r){
        swap(s[l++],s[r--]);
    }
    return s;
}


int main(){
   string input_string="mahadev";
   string res=reverse(input_string);
   cout<<res;
   return 0;
}
