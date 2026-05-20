#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>arr={1,3,2,4,1};
    int n=arr.size();
    vector<int>freq(n);
    for(int i=0;i<n;i++){
       freq[arr[i]]++;
    }

    for(int it:freq){
        cout<<it<<"\n";
    }
    return 0;
}
