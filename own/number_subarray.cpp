#include<bits/stdc++.h>

using namespace std;

int generateAllsubarray(vector<int>arr, int target){
    int n=arr.size();
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            // cout<<arr[j]<<" ";
            sum+=arr[j];

            if(sum==target){
                count++;
            }
        }
        // cout<<endl;
    }
    return count;
}

int main(){
    vector<int>nums={2,3,4,1,5};
    int res=generateAllsubarray(nums,5x);
    cout<<res;
    return 0;
}
