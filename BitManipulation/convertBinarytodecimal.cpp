#include <iostream>
#include <cmath>
using namespace std;

// Function to convert binary (string) to decimal
int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int length = binary.length();
    
    for (int i = 0; i < length; i++) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    return 0;
}
