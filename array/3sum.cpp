#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> threeSum(vector<int>arr){
    vector<vector<int>>ans;
    set<vector<int>> st;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int>temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

int main(){
    vector<int>nums={-1,0,1,2,-1,-4};
    vector<vector<int>>result=vectthreeSum(nums);
    for()
    return 0;
}

