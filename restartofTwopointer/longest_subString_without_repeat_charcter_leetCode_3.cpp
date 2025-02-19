#include<iostream>
#include<vector>
#include<cstring>

using namespace std;
int generate_subString(string s){
    int  maxLen=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        int hash[256]={0};
        for(int j=i;j<n;j++){
         if(hash[s[j]]==1) break;
         int len=j-i+1;   
         maxLen=max(maxLen,j-i+1);
         hash[s[j]]=1;
    }
}
    return maxLen;
}

int main(){
    string sa="Mahadev";
    cout<< generate_subString(sa);
    return 0;
}
