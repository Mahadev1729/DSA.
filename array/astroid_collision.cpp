#include<bits/stdc++.h>

using namespace std;

vector<int> asteroidCollision(vector<int>&a){
    int n=a.size();
    vector<int>list;
    for(int i=0;i<n;i++){
        if(a[i]>0) list.push_back(a[i]);
        else{
            while(!list.empty() && list.back()>0 && list.back()<abs(a[i])){
                list.pop_back();
            }
        }
        if(list.empty() && list.back()==abs(a[i])){
            list.pop_back();
        }else if(list.empty() || list.back()<0){
            list.push_back(a[i]);
        }
    }
    return list;
}

int main(){
    vector<int>arr={4,7,1,1,2,-3,-7,17,15,-18,-19};
    vector<int>res=asteroidCollision(arr);
    for(int it:res){
        cout<<it<<" ";
    }
    return 0;
}
