#include<bits/stdc++.h>


using namespace std;

// * * * *
// * * * *
// * * * *
// * * * *

void solve(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j=j*2){
            cout<<"*";
        }
        cout<<endl;
    }
}


// *
// * *
// * * * *
// * * * * *

void solve1(){
      for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
      }
}
// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5

void solve2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

void solve3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    solve2(5 );
    return 0;
}
