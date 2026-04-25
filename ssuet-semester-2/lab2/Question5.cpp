#include <iostream>

using namespace std;

int main() {
    int var_int;
    signed int var_signed;
    unsigned int var_unsigned;

    // CASE 1: Negative Number
    cout << "--- CASE 1: NEGATIVE NUMBER ---" << endl;
    cout << "Enter a negative whole number: ";
    cin >> var_int;

    var_signed = var_int;
    var_unsigned = var_int;

    cout << "Value in int:          " << var_int << endl;
    cout << "Value in signed int:   " << var_signed << endl;
    cout << "Value in unsigned int: " << var_unsigned << endl << endl;

    // CASE 2: Positive Number
    cout << "--- CASE 2: POSITIVE NUMBER ---" << endl;
    cout << "Enter a positive whole number: ";
    cin >> var_int;

    var_signed = var_int;
    var_unsigned = var_int;

    cout << "Value in int:          " << var_int << endl;
    cout << "Value in signed int:   " << var_signed << endl;
    cout << "Value in unsigned int: " << var_unsigned << endl;

    return 0;
}