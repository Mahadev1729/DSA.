#include<bits/stdc++.h>

using namespace std;

void solve_pattern(int n){
    // upper half
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // lower half
    for(int i=n-1;i>=1;i--){
        for(int j=n;j>i;j--){
            cout<<" ";

        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    solve_pattern(4);
    return 0;
}
