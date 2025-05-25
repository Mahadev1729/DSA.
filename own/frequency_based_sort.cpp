#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compare(int a, int b, unordered_map<int, int>& freq) {
    if (freq[a] == freq[b])
        return a < b; // Tie-breaker: by value
    return freq[a] < freq[b]; // Lower frequency first
}

int main() {
    vector<int> arr = {4, 5, 6, 5, 4, 3};
    unordered_map<int, int> freq;

    for (int num : arr)
        freq[num]++;

    sort(arr.begin(), arr.end(), [&](int a, int b) {
        return compare(a, b, freq);
    });

    for (int num : arr)
        cout << num << " ";

        return 0;
}
