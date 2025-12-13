#include<bits/stdc++.h>


using namespace std;

vector<vector<int>>solve(vector<vector<int>>&nums){
     int m=nums.size();
     int n=nums[0].size();
     vector<int>row(m,0);
     vector<int>col(n,0);
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(nums[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
     }

     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(row[i] || col[j]){
                nums[i][j]=0;
            }
        }
     }
}

int main(){

}
