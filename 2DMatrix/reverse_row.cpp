#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& images) {
        for(auto &row:images){
            reverse(row.begin(),row.end());
        }
        return images;
    } 
    
    
int main(){
  vector<vector<int>>arr={
    {1,2,3,4},
    {5,6,7,8},
    {10,11,12,13},
    {14,15,16,17}
    };

     vector<vector<int>>res=flipAndInvertImage(arr);
     for (const auto &row : res) {        
        for (int val : row) {            
            cout << val << " ";
        }
        cout << endl;
    }
}    
