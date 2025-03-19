#include<bits/stdc++.h>

using namespace std;

int nth_root_BS(int n,int m){
    int low=1;
    int high=m;
    int ans=1;
    while(low<=high){
        int mid=(low+high);
        if(pow(mid,n)==m){
            ans=mid;
            return ans;
            
        }
        else if(pow(mid,n)<m) low=mid+1;
        else high=mid-1;
        
    }
    return -1;
}
