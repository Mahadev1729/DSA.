#include <iostream>
using namespace std;

string one[] = {
    "", "One", "Two", "Three", "Four",
    "Five", "Six", "Seven", "Eight", "Nine"
};

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Zero";
    }

    while (n > 0) {
        int digit = n % 10;
        cout << one[digit] << " ";
        n /= 10;
    }

    return 0;
}
