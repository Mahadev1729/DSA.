#include<bits/stdc++.h>

using namespace std;

int solve(vector<string>products,vector<float>productPrices,vector<string>soldProduct,vector<float>soldPrice){
    unordered_map<string, float>mpp;

    int total_error_count;
    for(int i=0;i<products.size();i++){
        mpp[products[i]]=productPrices[i];
    }

    for(int i=0;i<productSold.size();i++){
        if(mpp[productSold[i]]!=soldPrice[i]){
            total_error_count++;
        }
    }
    return total_error_count;
}

int main(){

}
