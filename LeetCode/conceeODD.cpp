#include<bits/stdc++.h>

using namespace std;

//{1,3,5,6,7} -- input arr

bool odd_is(vector<int>&nums){
    int count=0;
    for(auto num:nums){
        if(num%2!=0){
            count++;

        }
        else{
            count=0;
        }
    }
    if(count==3){
        return true;
    }
    else return false;
}

int main(){
    vector<int>arr={1,3,5,6,7};
    bool res;
    res=odd_is(arr);
    cout<<res;
    return 0;

}

