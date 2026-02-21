#include<bits/stdc++.h>

using namespace std;

int solution(int numbottles,int numexchange){
    int consumed=0;
    while(numbottles>=numexchange){
        consumed+=numexchange;
        numbottles-=numexchange;
        numbottles+=1;
    }
    return consumed;
}

int main(){
    int res=solution(10,3);
    cout<<res;
    return 0;
}
