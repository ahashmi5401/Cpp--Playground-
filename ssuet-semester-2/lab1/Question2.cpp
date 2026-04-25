// Try uncommenting these one at a time to see the compiler errors:
// #include< iostream>  // Error: No such file or directory
//#include < iostream> // Error: No such file or directory
// #include<iostream >  // Error: No such file or directory

#include <iostream>    // Correct syntax

using namespace std;

int main() {
    cout << "Checking Header Syntax..." << endl;
    cout << "Status: Only #include <iostream> (no internal spaces) compiled successfully." << endl;
    
    return 0;
}