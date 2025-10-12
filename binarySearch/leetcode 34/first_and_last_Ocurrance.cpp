#include<bits/stdc++.h>

using namespace std;
 

vector<int> first_last_Ocurrance(vector<int>nums,int x){
    int n=nums.size();
    int first=-1,last=-1;
    for(int i=0;i<n;i++){
        if(nums[i]==x){
            if(first==-1) first=i;
            last=i;
        }
    }
    return {first,last};
}

int main(){
    vector<int>arr={2,4,6,8,8,8,11,13};
    vector<int>res=first_last_Ocurrance(arr,8);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}
