 

#include <iostream>
using namespace std;

int main() {
    int days;


    cout << "Enter the number of days the book was kept: ";
    cin >> days;
    
    if (days > 14) {
        cout << "Fine Applicable" << endl;
    }

    return 0;
}