#include<bits/stdc++.h>

using namespace std;

int minBitsFlip(int start,int goal){
    int ans=start^goal;
    int cnt=0;
    for(int i=0;i<31;i++){
        if((ans&(1<<i))){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int res=minBitsFlip(10,7);
    cout<<res;
    return 0;
}
