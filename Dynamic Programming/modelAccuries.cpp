#include<bits/stdc++.h>
using namespace std;

void countSubSets(int indx,vector<int>&valid,int minModels,int count,int& total){
    if(indx==valid.size()){
        if(count>=minModels)
            total++;            
        return;
    }
    countSubSets(indx+1,valid,minModels,count+1,total);
    countSubSets(indx+1,valid,minModels,count,total);
}    

int main(){
    vector<int>modelAccuries={12,4,6,13,5,10};
    int minModels=3;
    int minAccuracy=4;
    int maxAccuracy=10;
    vector<int>valid;
    for(auto acc:modelAccuries){
        if(acc>=minAccuracy && acc<=maxAccuracy){
            valid.push_back(acc);
        }
    }
    int total=0;
    countSubSets(0,valid,minModels,0,total);
    cout<<total;
    return 0;
}


