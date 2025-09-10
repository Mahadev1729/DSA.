#include <bits/stdc++.h>
using namespace std;

void generate_allsub_fun(int indx, vector<int> &arr, vector<int> &ds, int n,int current_sum,int key) {
    if (indx == n) {
        if(current_sum==key){
        for (auto it : ds) {
            cout << it << " ";
        }
        cout << endl;
    }
        return;
    }

    
    ds.push_back(arr[indx]);
    generate_allsub_fun(indx + 1, arr, ds, n,current_sum+arr[indx], key);
    ds.pop_back();
    generate_allsub_fun(indx + 1, arr, ds, n,current_sum,key);
}

int main() {
    vector<int> arr = {3, 1, 2,2,1,1};
    int n = arr.size();
    vector<int> ds;
    generate_allsub_fun(0, arr, ds, n,0,3);
    return 0;
}
