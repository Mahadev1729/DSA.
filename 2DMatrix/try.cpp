#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Sample 2D vector
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(auto it:grid[1]){
        cout<<it;
    }

    return 0;
}
