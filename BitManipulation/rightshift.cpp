#include<bits/stdc++.h>

using namespace std;

int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int length = binary.length();
    
    for (int i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

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

int rightShift( )
