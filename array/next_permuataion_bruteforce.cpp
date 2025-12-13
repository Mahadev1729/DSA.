#include<bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    if (next_permutation(v.begin(), v.end())) {
        
        for (int x : v) cout << x << " ";
    } else {
        cout << "No next permutation (already the largest)";
    }

    return 0;
}


