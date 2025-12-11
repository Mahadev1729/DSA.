#include<bits/stdc++.h>

using namespace std;

//brute force

vector<int> next_Greater_Ele(vector<int>&arr){
   vector<int>nge(arr.size(),-1);
   int n=arr.size();
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]>arr[i]){
            nge[i]=arr[j];
            break;
        }
      }
   }
   return nge;
}

// optimal solution
// use of stack
vector<int> findNextGreterELe(vector<int>&arr){
    vector<int>nge(arr.size());
    stack<int>st;
    for(int i=arr.size()-1;i>0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()) nge[i]=-1;
        else nge[i]=st.top();
        st.push(arr[i]);
    }
    return nge;
}


int main(){
    vector<int>arr={6,0,8,1,3};
    vector<int>res=findNextGreterELe(arr);
    for(int it:res){
        cout<<it<<" ";
    }
    return 0;
}
