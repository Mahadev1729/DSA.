#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {

        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {

        // Print leading spaces
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        // Print stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
