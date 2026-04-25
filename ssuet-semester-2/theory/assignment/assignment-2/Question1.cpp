#include <iostream>
using namespace std;

int main() {
    // Identification Header
    cout << "Name: Muhammad Ayan Hashmi" << endl;
    cout << "Roll No: 2025F-BCE-226" << endl;
    cout << "Section: C" << endl;
    cout << "---------------------------" << endl;

    int L1 = 6; // Updated to match your Roll No last digit (226 -> 6)
    int L2 = 2; // Updated to match your Roll No second last digit (226 -> 2)
    double units, age, bill = 0;

    cout << "Enter units consumed: ";
    cin >> units;
    cout << "Enter customer age: ";
    cin >> age;

    // Slab Calculation using Switch
    // We divide by 100 to create cases for each 100-unit slab
    int slab = (units <= 0) ? -1 : (int)(units - 1) / 100;

    switch (slab) {
        case 0: // 1 to 100 units
            bill = units * (L1 + 2);
            break;
        case 1: // 101 to 200 units
        case 2: // 201 to 300 units
            bill = (100 * (L1 + 2)) + ((units - 100) * (L1 + 5));
            break;
        case 3: // 301 to 400 units
        case 4: // 401 to 500 units
            bill = (100 * (L1 + 2)) + (200 * (L1 + 5)) + ((units - 300) * (L2 + 10));
            break;
        default: // Above 500 units
            if (units > 500) {
                bill = (100 * (L1 + 2)) + (200 * (L1 + 5)) + (200 * (L2 + 10)) + ((units - 500) * (L2 + 13));
            } else {
                cout << "Invalid units entered." << endl;
                return 0;
            }
            break;
    }

    // Senior Citizen Discount
    if (age >= 60 && units <= 100) {
        double discount = bill * (L1 + 10) / 100.0;
        bill -= discount;
        cout << "Senior Citizen Discount Applied!" << endl;
    }

    cout << "Total Electricity Bill: Rs. " << bill << endl;

    return 0;
}