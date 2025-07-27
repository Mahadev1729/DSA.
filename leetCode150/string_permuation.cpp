#include<bits/stdc++.h>
using namespace std;

void string_permute(string s,int index){
    if(index==s.size()){
        cout<<s<<endl;
        return;
    }
    for(int i=index;i<s.size();i++){
        swap(s[index],s[i]);
        string_permute(s,index+1);
        swap(s[index],s[i]);
    }
}

int main(){
    string s="abcd";
    string_permute(s,0);
    return 0;
}
