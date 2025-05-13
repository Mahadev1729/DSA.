#include<bits/stdc++.h>

using namespace std;

void generateAllsubarray(vector<int>arr, int target){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            // cout<<arr[j]<<" ";
            sum+=arr[j];

            if(sum==target){
                cout<<arr[j]<<" ";
                
                count++;
            }
        }
        // cout<<endl;
    }
    // return count;
}

int main(){
    vector<int>nums={2,3,4,1,5};
    // int res=generateAllsubarray(nums,5);
    // cout<<res;
    generateAllsubarray(nums,5);
    return 0;
}
