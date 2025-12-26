#include<bits/stdc++.h>

using namespace std;

int fun_totalHour(vector<int>&arr,int hourly){
    int totalHour=0;
    for(int i=0;i<arr.size();i++){
        totalHour+=ceil(arr[i]/hourly);
    }
    return totalHour;
}

int solve(vector<int>)

int main(){
    
}
