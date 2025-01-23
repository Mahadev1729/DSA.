#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>arr={2,5,1,7,10};
    int n=arr.size();
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


