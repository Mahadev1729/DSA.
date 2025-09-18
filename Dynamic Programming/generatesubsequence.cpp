#include <bits/stdc++.h>
using namespace std;

void generate_allsub_fun(int indx, vector<int> &arr, vector<int> &ds, int n) {
    if (indx == n) {
        
        for (auto it : ds) {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
        
    

    
    ds.push_back(arr[indx]);
    generate_allsub_fun(indx + 1, arr, ds, n);
    ds.pop_back();
    generate_allsub_fun(indx + 1, arr, ds, n);
}

int main() {
    vector<int> arr = {10,9,2,5,3,7,101,18};
    int n = arr.size();
    vector<int> ds;
    generate_allsub_fun(0, arr, ds, n);
    return 0;
}
