#include<bits/stdc++.h>
using namespace std;

void backtrack(int index, int target, vector<int>& ds, vector<vector<int>>& res, vector<int>& arr) {
    if (target == 0) {
        res.push_back(ds);
        return;
    }

    for (int i = index; i < arr.size(); ++i) {
        // Skip duplicates to resolve MLE
        if (i > index && arr[i] == arr[i - 1]) continue;

        // Stop if the current number is greater than the remaining target
        if (arr[i] > target) break;

        ds.push_back(arr[i]);
        backtrack(i + 1, target - arr[i], ds, res, arr);
        ds.pop_back();
    }
}


vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> ds;

    sort(candidates.begin(), candidates.end());
    backtrack(0, target, ds, res, candidates);
    return res;
}



int main(){
     
    vector<int>list={1,2-1,4,3,0,-2,-4,5};
    vector<vector<int>>sol;
    sol=combinationSum2(list,4);
    for(const auto& subseq:sol){
        for(auto num:subseq){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;

}
