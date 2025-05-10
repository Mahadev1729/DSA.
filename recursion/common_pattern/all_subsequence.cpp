#include<iostream>
#include<vector>
using namespace std;

void print_all_subsequence(int indx,vector<int>&ds,vector<int>nums){
    int n=nums.size();
    if(indx==n){
       
        for(auto it:ds){
            cout<<it<<" ";
            
        }
        
        if(ds.size()==0){
            cout<<"[]";
        }
        cout<<endl;
        return;
    }
    ds.push_back(nums[indx]);
    print_all_subsequence(indx+1,ds,nums);
    ds.pop_back();
    print_all_subsequence(indx+1,ds,nums);
}
/// every index couple of option
int main(){
    vector<int>arr={3,1,2};
    vector<int>ds;
    print_all_subsequence(0,ds,arr);
    return 0;
}
