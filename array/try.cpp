#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>&V,vector<int>&res,int i){
 0;
    if(i==V.size()){
        for(auto it:res){
            cout<<it<<" ";
        }
        cout<<endl;
        return ;
    }//exlude;
    res.push_back(V[i]);
   
    subset(V,res,i+1);
    res.pop_back();
    
    subset(V,res,i+1);
  
}
int main()
{
    vector<int>v={1,2,3};
    vector<int>op;
    int count=subset(v,op,0);
    cout<<count;
return 0;
}
