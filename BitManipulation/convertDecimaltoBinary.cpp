#include<bits/stdc++.h>

using namespace std;

// creating function
string convert2Binary(int n){
    string res="";
    while(n!=1){
      if(n%2==1) res+='1';
      else res+='0';
      n=n/2;  
    }
    reverse(res.begin(),res.end());
    return res;
}

int main(){
    int x;
    cout<<"Enter a number to conver decimal to binary:";
    cin>>x;
    string sol=convert2Binary(x);
    cout<<sol;
    return 0;
}
