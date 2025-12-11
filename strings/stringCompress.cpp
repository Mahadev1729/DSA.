#include<bits/stdc++.h>

using namespace std;
vector<char> compress(vector<char>& chars) {
        int n=chars.size();
        int indx=0;
        for(int i=0;i<n;i++){
            char ch=chars[i];
            int count=0;
            while(i<n && chars[i]==ch){
                count++;
                i++;
            }
            if(count==1){
                chars[indx++]=ch;
            }else{
                chars[indx++]=ch;
                string str=to_string(count);
                for(char dig:str){
                    chars[indx++]=dig;
                }
            }
            i--;
        }
        chars.resize(indx);
        return chars;
}

int main(){
    vector<char>arr={'a','a','b','b','c'};
    vector<char> res=compress(arr);
    for(char ch:res){
        cout<<ch<<" ";
    }
    return 0;
}
