#include <iostream>

using namespace std;

int main() {
    int i_val;
    double d_val;

    // Example 1: Promotion (int to double)
    cout << "Enter an integer to promote: ";
    cin >> i_val;
    double promoted = i_val; 
    cout << "Promoted value: " << promoted << endl;

    // Example 2: Demotion (double to int)
    cout << "\nEnter a double to demote: ";
    cin >> d_val;
    int demoted = d_val; 
    cout << "Demoted value: " << demoted << endl;

    return 0;
}