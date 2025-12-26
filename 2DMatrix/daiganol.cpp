#include<bits/stdc++.h>

using namespace std;

int daiganolSum(vector<vector<int>>&mat){
    int row=mat.size();
    int col=mat[0].size();
    int daiganolSum=0;
    for(int i=0;i<row;i++){
        daiganolSum+=mat[i][i];
        daiganolSum+=mat[i][row-i-1];
    }
    int daiganolSum_odd=0;
    if(row%2!=0){
        daiganolSum_odd=daiganolSum-mat[row/2][row/2];
        return daiganolSum_odd;
    }
    return daiganolSum;
}

int main(){
    vector<vector<int>>matrix={
        {1,2,3,1},
        {4,5,6,1},
        {7,8,9,1},
        {10,11,12,13},
    };
    int res=daiganolSum(matrix);
    cout<<res;
    return 0;
}
