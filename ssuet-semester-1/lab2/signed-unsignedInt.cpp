#include <iostream>
using namespace std;

int main() {
    int a;           // Standard integer (Signed by default)
    signed int b;    // Explicitly signed (Same as int)
    unsigned int c;  // Sirf positive numbers ke liye

    // --- Part 1: Negative Number Testing ---
    cout << "Enter a negative number: ";
    cin >> a;

    b = a; // Implicit casting
    c = a; // Implicit casting (Yahan wrap-around hoga)

    cout << "int:          " << a << endl;
    cout << "signed int:   " << b << endl;
    cout << "unsigned int: " << c << "  <-- (Negative converted to large positive)" << endl;

    cout << "\nEnter a positive number: ";
    cin >> a;

    b = a;
    c = a;

    cout << "int:          " << a << endl;
    cout << "signed int:   " << b << endl;
    cout << "unsigned int: " << c << endl;

    return 0;
}