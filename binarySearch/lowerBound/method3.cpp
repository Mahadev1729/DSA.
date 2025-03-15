#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Finding lower bound for value 35 in vector v
    auto it = lower_bound(v.begin(), v.end(), 35);
    
    // Calculating the index
    int index = it - v.begin();

    cout << "Lower bound index: " << index << endl;

    return 0;
}
