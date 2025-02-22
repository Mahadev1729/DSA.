#include<iostream>
#include<vector>
using namespace std;

int f_name(int number,vector<int>arr){
    int cnt=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==number){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    vector<int>nums={1,2,1,3,2};
    int res=f_name(1,nums);
    cout<<res;
    return 0;
}
