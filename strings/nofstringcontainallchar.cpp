#include<bits/stdc++.h>
using namespace std;

int numberOfSubstrings(string s) {
    int n = s.length();
    int count = 0;
    for(int i=0; i<n; i++){
        vector<int> hash(3,0);
        for(int j=i; j<n; j++){
            hash[s[j]-'a'] = 1;
            if(hash[0] + hash[1] + hash[2] == 3){
                count++;
            }
        }
    }
    return count;
}

int main(){
    string s = "abcabc";
    int res = numberOfSubstrings(s);
    cout << res;
    return 0;
}
