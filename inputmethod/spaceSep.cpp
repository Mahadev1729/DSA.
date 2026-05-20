#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    vector<int>arr;
    stringstream ss(s);
    string num;
    while(getline(ss,num,',')){
        arr.push_back(stoi(num));
    }
    for(int ans:arr){
        cout<<ans<<" ";
    }
    return 0;
}
