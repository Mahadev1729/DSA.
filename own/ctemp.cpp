#include <iostream>
#include <vector>
using namespace std;

// Recursive function to check for a triplet that sums to target
bool findTriplet(vector<int>& arr, int target, int index, int count, int currentSum) {
    if (count == 2) {
        return currentSum == target;
    }
    if (index >= arr.size()) {
        return false;
    }

    // Include current element
    if (findTriplet(arr, target, index + 1, count + 1, currentSum + arr[index])) {
        return true;
    }

    // Exclude current element
    return findTriplet(arr, target, index + 1, count, currentSum);
}

bool hasTripletSum(vector<int>& arr, int target) {
    return findTriplet(arr, target, 0, 0, 0);
}

int main() {
    vector<int> arr = {1, 4, 2, 6, 5};
    int target = 10;

    if (hasTripletSum(arr, target)) {
        cout << "Triplet with sum " << target << " exists.\n";
    } else {
        cout << "No triplet with sum " << target << " found.\n";
    }

    return 0;
}
