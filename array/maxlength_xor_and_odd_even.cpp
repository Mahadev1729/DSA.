#include<bits/stdc++.h>

using namespace std;

bool has_Odd_Even(vector<int>&arr){
    int evenCount=0;
    int oddCount=0;
    for(int ele:arr){
        if(ele%2!=0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    return (evenCount==oddCount);
}

bool is_Xor_Zero(vector<int>&arr){
    int xor_ele=0;
    for(auto it:arr){
        xor_ele=xor_ele^it;
    }
    return (xor_ele==0);
}

int generate_allsubarr(vector<int>&arr){
    int n=arr.size();
    int maxLen=INT_MIN;
    for(int i=0;i<n;i++){
        vector<int>subArr;
        for(int j=i;j<n;j++){
           subArr.push_back(arr[j]);
           if(has_Odd_Even(subArr) && is_Xor_Zero(subArr)){
            maxLen=max(maxLen,(int)subArr.size());
           }
        }
    }
    return maxLen;
}

int main(){
   vector<int>nums={3,2,8,5,4,14,9,15};
   int res=generate_allsubarr(nums);
   cout<<res;
   return 0;
}
