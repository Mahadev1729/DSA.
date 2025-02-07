#include<bits/stdc++.h>
using namespace std;

fun(int ind,vector<int>&ds,int arr[],int n){
    //base condition
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
    if(ds.size()==0){
        cout<<"{}";
    }
        cout<<endl;
       return -1;
    }
    fun(ind+1,ds,arr,n);
    ds.push_back(arr[ind]);
    fun(ind+1,ds,arr,n);
    ds.pop_back();
   
}

int main(){
   
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ds;
    fun(0,ds,arr,n);
    return 0;
}
