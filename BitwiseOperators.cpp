#include<iostream>
using namespace std;

int main() {
    int x, y;
    
    cout << "Enter the first number (x): ";
    cin >> x;

    cout << "Enter the second number (y): ";
    cin >> y;

    // Bitwise operations
    int and_result = x & y;
    int or_result = x | y;
    int xor_result = x ^ y;
    int not_result = ~x;
    int left_shift = x << 1;
    int right_shift = y >> 1;

    // Display results
    cout << "\n--- Bitwise Operation Results ---" << endl;
    cout << "x & y (AND)         = " << and_result << endl;
    cout << "x | y (OR)          = " << or_result << endl;
    cout << "x ^ y (XOR)         = " << xor_result << endl;
    cout << "~x (NOT of x)       = " << not_result << endl;
    cout << "x << 1 (Left Shift) = " << left_shift << "  (x * 2)" << endl;
    cout << "y >> 1 (Right Shift)= " << right_shift << "  (y / 2)" << endl;

    return 0;
}
