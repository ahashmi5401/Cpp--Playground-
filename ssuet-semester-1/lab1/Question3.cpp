#include <iostream>

using namespace std;

int main() {
    // Hardcoded Data
    string roll = "2025-SSUET-226"; // Placeholder Roll#
    string name = "Muhammad Ayan Hashmi";
    string dob  = "January 02, 2008"; 
    string cell = "+92-317-0254252";
    string addr = "Karachi, Pakistan";
    string mail = "ayan.hashmi@example.com";

    cout << "***************************************************" << endl;
    cout << "STUDENT INFORMATION" << endl;
    cout << "***************************************************" << endl;
    
    cout << "Roll#:    \t" << roll << endl << endl;
    cout << "Name:     \t" << name << endl << endl;
    cout << "DOB:      \t" << dob  << endl << endl;
    cout << "Contact:  \t" << cell << endl << endl;
    cout << "Address:  \t" << addr << endl << endl;
    cout << "E-mail:   \t" << mail << endl;
    
    cout << "***************************************************" << endl;

    return 0;
}