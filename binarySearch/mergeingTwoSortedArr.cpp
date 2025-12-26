#include<bits/stdc++.h>

using namespace std;

vector<int> mergeTwoSortedArr(vector<int>&a, vector<int>&b){
    int i=0;
    int j=0;
    vector<int>result;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            result.push_back(a[i]);
            i++;
        }else{
            result.push_back(b[j]);
            j++; 
        }
    }
    while(i<a.size()) result.push_back(a[i++]);
    while(i<b.size()) result.push_back(b[j++]);

    return result;
}

int main(){
    vector<int>a={23,24,35,56,78};
    vector<int>b={12,14,23,45,67};
    vector<int>res=mergeTwoSortedArr(a,b);
    for(int it:res){
        cout<<it<<" ";
    }
    return 0;

}
