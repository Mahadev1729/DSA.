// using linear search concept

#include<bits/stdc++.h>

using namespace std;

int fun_to_allocate(vector<int>&arr,int pages){
    int stud=1;
    int pagesStudent=0;
    for(int i=0;i<arr.size();i++){
        if(pagesStudent+arr[i]<=pages){
            pagesStudent+=arr[i];
        }else{
            stud++;
            pagesStudent=arr[i];
        }
    }
    return stud;
}

int linear_search_Solution(vector<int>&arr,int m){
    if(m>arr.size()) return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(), arr.end(), 0);
    for(int pages=low;pages<high;pages++){
        int countStud=fun_to_allocate(arr,pages);
        if(countStud==m){
            return pages;
        }
    }
    return -1;
}

int main(){
   vector<int>nums={12,34,67,90};
   int res=linear_search_Solution(nums,2);
   cout<<res;
   return 0;
}
