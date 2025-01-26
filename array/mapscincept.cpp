#include<iostream>
#include<vector>
#include<unordered_map>
#include<chrono>
using namespace std;
using namespace std::chrono;

void countOccurrence(vector<int>nums,int size_of_array){
    unordered_map<int,int>mp;
    for(int i=0;i<size_of_array;i++){
       mp[nums[i]]++;
    }
    for(auto it:mp){
       
        cout<<it.first<<" "<<":"<<" "<<it.second<<endl;
    }
}

int main(){
    vector<int>arr={1,2,3,12,4,3,6,7,8};
    int n=arr.size();
    auto start=high_resolution_clock::now();
    countOccurrence(arr,n);
    auto stop=high_resolution_clock::now();
    auto time=duration_cast<milliseconds>(stop-start);
    cout<<"Time taken to run function"<<time.count()<<endl;
    return 0;
}
