class Solution {
    public:
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<vector<int>> res;
            vector<int> ds;
    
            sort(candidates.begin(), candidates.end());
            backtrack(0, target, ds, res, candidates);
            return res;
        }
    
    private:
        void backtrack(int index, int target, vector<int>& ds,
                       vector<vector<int>>& res, vector<int>& arr) {
            if (target == 0) {
                res.push_back(ds);
                return;
            }
    
            for (int i = index; i < arr.size(); ++i) {
                // Skip duplicates to sole MLE
                if (i > index && arr[i] == arr[i - 1]) continue;
    
                // Stop if the current number is greater than the remaining target
                if (arr[i] > target) break;
    
                ds.push_back(arr[i]);
                backtrack(i + 1, target - arr[i], ds, res, arr);
                ds.pop_back();
            }
        }
    };
    