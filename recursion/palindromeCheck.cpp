#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1="Naman";
    int flag=-1;
    int n=s1.size();
    for(int i=0;i<n;i++){
        if(s1[i]==s1[n-i-1]){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"String is palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
}
