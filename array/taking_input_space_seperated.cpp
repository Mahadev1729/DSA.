#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cout<<"Enter a string";
    getline(cin,s);
    vector<int>arr;
    stringstream ss(s);
    string num;
    while(getline(ss,num,' ')){
        arr.push_back(stoi(num));
    }
    for(int a:arr){
        cout<<a<<" "<<endl;
    }
    return 0;
}
