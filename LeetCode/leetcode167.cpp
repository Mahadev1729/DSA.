#include<bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int l=0,r=numbers.size()-1;
    while(l<r){
     int total=numbers[l]+numbers[r];
     if(total==target) return {l+1,r+1};
     else if(total>target) r--;
     else l++;
    }   
    return {-1,-1};
}    

int main(){
    vector<int>arr={2,1,-2,3,4};
    vector<int>res;
    res=twoSum(arr,4);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}
    
