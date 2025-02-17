#include<iostream>
#include<vector>
using namespace std;
void generateAllSubarray(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int>arr={2,5,1,7,10};
    generateAllSubarray(arr);
    return 0;
}
