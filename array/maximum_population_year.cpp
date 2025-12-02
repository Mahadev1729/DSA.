#include<bits/stdc++.h>

using namespace std;



int maximumPopulation(vector<vector<int>>& logs) {
        vector<int>arr(101,0);
        for(auto &log:logs){
            int by=log[0];
            int dy=log[1];
            arr[by-1950]++;
            arr[dy-1950]--;
        }
        int maxPop=arr[0];
        int maxYear=1950;
        for(int i=1;i<101;i++){
            arr[i]+=arr[i-1];
            if(arr[i]>maxPop){
                maxPop=arr[i];
                maxYear=1950+i;
            }
        }
        return maxYear;
    }        
    


int main(){
    vector<vector<int>>arr={{1993,1999},{2000,2010}};
    int res=maximumPopulation(arr);
    cout<<res;
    return 0;

}    
