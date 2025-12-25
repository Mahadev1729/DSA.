#include<bits/stdc++.h>

using namespace std;

// [0,3,8,9,5,2]
// 9

// bool is_inc(vector<int>&nums){
//     int n=nums.size();
//     int flag=-1;
//     for(int i=0;i<n;i++){
//         if(nums[i]<nums[i+1]){
//             flag=1;
//         }
//     }
//     return flag!=1;
// }

// bool is_dec(vector<int>&nums){
//     int n=nums.size();
//     int flag=-1;
//     for(int i=n-1;i>=0;i--){
//         if(nums[i]<nums[i-1]){
//             flag=1;
//         }
//     }
//     return flag!=1;
// }

// if p peak index  arr[p-1]<arr[p]>arr[p+1]

int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
                return i;
            }
        }
        return -1;
    }

