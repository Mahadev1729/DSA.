#include<bits/stdc++.h>

using namespace std;


bool isSum_Equal(vector<int>&arr,int K){
    int sum_arr=0;
    for(int it:arr){
        sum_arr+=it;
    }
    return (sum_arr==K);
}

int long_subarray_with_sumK(vector<int>&arr,int k){
    int n=arr.size();
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=i;j<n;j++){
            temp.push_back(arr[j]);
            if(isSum_Equal(temp,k)==true){
                max_ele=max(max_ele,(int)temp.size());
            }
        }
    }
    return max_ele;
}

int main(){
    vector<int>arr={1,2,3,-3,1,1,1,4,2,-3};
    int res=long_subarray_with_sumK(arr,3);
    cout<<res;
    return 0;
}
