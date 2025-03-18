#include<bits/stdc++.h>

using namespace std;

int find_sqrt_using_LS(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        if(i*i<=n){
            ans=i;
        }
        else
        {
            break;
        }
    }
    return ans;
}

int main(){
    int res=find_sqrt_using_LS(49);
    cout<<res;
    return 0;
}
