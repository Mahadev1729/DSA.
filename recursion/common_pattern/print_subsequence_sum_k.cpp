#include<iostream>
#include<vector>
using namespace std;
void print_subsequence_sumK(int i,vector<int>ds,int s,int k, vector<int>nums){
    if(i==nums.size()){
        if(s==k){
            for(auto it:ds){
              cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    ds.push_back(nums[i]);
    s+=nums[i];
    print_subsequence_sumK(i+1,ds,s,k,nums);
    s-=nums[i];
    ds.pop_back();
    print_subsequence_sumK(i+1,ds,s,k,nums);
}
    


int main(){
    vector<int>arr={1,2,1,-1,2,3,0};
    vector<int>ds;
    int sum=2;
    print_subsequence_sumK(0,ds,0,sum,arr);
}
