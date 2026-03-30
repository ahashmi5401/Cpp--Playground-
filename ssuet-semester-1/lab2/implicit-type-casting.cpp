#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    float sum;
    double average;

    // User se input lena (Integers mein)
    cout << "Enter first integer number: ";
    cin >> num1;

    cout << "Enter second integer number: ";
    cin >> num2;

    // --- IMPLICIT TYPE CASTING EXAMPLES ---

    // 1. Int + Int ka result Float mein save ho raha hai (Automatic conversion)
    sum = num1 + num2; 

    // 2. Do integers ko divide karke double mein store karna
    // Yahan num1 aur num2 automatic promote ho jate hain calculation ke waqt
    average = sum / 2; 

    cout << "-------------------------------------" << endl;
    cout << "First Number (int)  : " << num1 << endl;
    cout << "Second Number (int) : " << num2 << endl;
    cout << "Sum (float)         : " << sum << "  <-- (Int converted to Float)" << endl;
    cout << "Average (double)    : " << average << "  <-- (Float converted to Double)" << endl;
    cout << "-------------------------------------" << endl;

    return 0;
}