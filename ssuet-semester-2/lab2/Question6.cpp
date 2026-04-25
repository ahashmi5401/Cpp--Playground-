#include <iostream>

using namespace std;

int main() {
    // 1. long double to double
    long double ld = 1.23456789012345;
    double d = static_cast<double>(ld);
    cout << "long double to double: " << d << endl;

    // 2. double to float
    double d2 = 98.7654;
    float f = static_cast<float>(d2);
    cout << "double to float: " << f << endl;

    // 3. float to long
    float f2 = 500.55f;
    long l = static_cast<long>(f2);
    cout << "float to long: " << l << endl;

    // 4. long to int
    long l2 = 100000;
    int i = static_cast<int>(l2);
    cout << "long to int: " << i << endl;

    // 5. int to short
    int i2 = 32000;
    short s = static_cast<short>(i2);
    cout << "int to short: " << s << endl;

    // 6. short to char
    short s2 = 65;
    char c = static_cast<char>(s2);
    cout << "short to char: " << c << " (ASCII of 65)" << endl;

    return 0;
}