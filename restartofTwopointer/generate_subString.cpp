#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
void generate_subString(string s){
    int n=s.length();
    for(int i=0;i<n;i++){
        string sub="";
        for(int j=i;j<n;j++){
            sub=sub+s[j];
            cout<<sub<<endl;
        }
        
    }
}
int main(){
    string sa="Mahadev";
    generate_subString(sa);
    return 0;
}
