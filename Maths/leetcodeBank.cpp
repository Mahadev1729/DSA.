#include<bits/stdc++.h>

using namespace std;

int bank_amount(int n){
    int result=0;
    int start_day=1;
    while(n>0){
        int monday=start_day;
        for(int day=1;day<=min(n,7);day++){
            result+=day;
            monday++;
        }
        n=n-7;
        start_day++;
    }
    return result;
}
int main(){
    int res=bank_amount(8);
    cout<<res;
    return 0;
}
