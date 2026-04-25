#include <iostream>

using namespace std;

int main() {
    double inches;
    double meters;
    const double CONVERSION_FACTOR = 0.0254;

    cout << "Enter the value in inches: ";
    cin >> inches;

    meters = inches * CONVERSION_FACTOR;

    cout << inches << " inches is equal to " << meters << " meters." << endl;

    return 0;
}