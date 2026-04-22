#include <iostream>
#include <iomanip> // For setw()
using namespace std;

int main() {
    // Required Identification Header
    cout << "Name: Muhammad Ayan Hashmi" << endl;
    cout << "Roll No: 2025F-BCE-226" << endl;
    cout << "Section: C" << endl;
    cout << "---------------------------" << endl;

    // L1 is the last digit of your roll number (226 -> 6)
    int L1 = 6; 
    int criticalLevel = L1 + 5; // Critical Level = 11

    string products[3] = {"Rice", "Sugar", "Flour"};

    // Initialized 3x4 array representing 3 products across 4 branches
    // Values adjusted to ensure at least 2 are below the critical level (11)
    int inventory[3][4] = {
        {50, 8, 30, 45},   // Branch 2 is low (8 < 11)
        {20, 15, 10, 60},  // Branch 3 is low (10 < 11)
        {12, 9, 25, 33}    // Branch 2 is low (9 < 11)
    };

    // Table Header
    cout << left << setw(10) << "Product" << setw(10) << "B1" << setw(10) << "B2" 
         << setw(10) << "B3" << setw(10) << "B4" << "Row Total" << endl;
    cout << "------------------------------------------------------------" << endl;

    // Outer loop for Products (Rows)
    for (int i = 0; i < 3; i++) {
        cout << left << setw(10) << products[i];
        int totalProductStock = 0;

        // Inner loop for Branches (Columns)
        for (int j = 0; j < 4; j++) {
            cout << left << setw(10) << inventory[i][j];
            totalProductStock += inventory[i][j]; 
        }
        cout << "| Total: " << totalProductStock << endl;
    }

    // Critical Stock Check
    cout << "\n--- Critical Stock Warnings (Below " << criticalLevel << ") ---" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (inventory[i][j] < criticalLevel) {
                cout << "REORDER ALERT: " << products[i] << " at Branch " << j + 1 
                     << " is critical! Stock: " << inventory[i][j] << endl;
            }
        }
    }

    return 0;
}