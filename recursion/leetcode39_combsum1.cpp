class Solution {
public:
    void comb(int index,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int>ds){
   //base case indx==n: target=0
    if(index==arr.size()){
     if(target==0){
        ans.push_back(ds);
     }
     return;
   }
   //pick the element
   if(arr[index]<=target){
    ds.push_back(arr[index]);
    comb(index,target-arr[index],arr,ans,ds);
    ds.pop_back();
   }
   comb(index+1,target,arr,ans,ds);
}
public:
vector<vector<int>> combinationSum(vector<int>& candidates,int target){
    vector<vector<int>> ans;
    vector<int>ds;
    comb(0,target,candidates,ans,ds);
    return ans;
}
};
