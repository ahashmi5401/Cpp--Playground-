
#include <iostream>
using namespace std;

int main() {
    double inches, meters;
    const double conversion_factor = 0.0254; // 1 inch mein itne meters hote hain



    cout << "Enter value in Inches: ";
    cin >> inches;


    meters = inches * conversion_factor;


    cout << inches << " Inches is equal to: " << meters << " Meters" << endl;


    return 0;
}