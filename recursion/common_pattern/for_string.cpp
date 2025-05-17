#include<bits/stdc++.h>

using namespace std;
// continue 

void for_string(int index,string current_char,vector<string>ds,vector<string>s,vector<vector<string>>&result){
    int n=s.size();
    if(index==n){
        result.push_back(ds);
    }
    return ;

    ds.push_back(s[index]);
    for_string(index+1,current_char+s[index],ds,s,result);
    ds.pop_back();
    for_string(index+1,current_char,ds,s,result);
}
int main(){
    vector<string> sn={'Mahadev'};
    vector<vector<string>>res;
    vector<string>ds;
    for_string(0," ",ds,sn,res);
    for(const auto& subseq:res){
        for(auto ch:subseq){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}
