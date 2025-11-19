#include<bits/stdc++.h>

using namespace std;



vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!ans.empty() &&  end <=ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(intervals[j][0]<=end){
                    end=max(end,intervals[j][1]);
                }else{
                    break;
                }
            }
            ans.push_back({start,end});
        }
        return ans;
    
    
    }

int main(){
    vector<vector<int>>arr={{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    vector<vector<int>>ans=merge(arr);
    for(int row:ans){
        for(int col:row){
            cout<<col<<" ";
        }
    }
    return 0;
}


