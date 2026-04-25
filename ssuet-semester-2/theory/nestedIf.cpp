#include <iostream>
using namespace std;

int main() {
    int marks = 80;
    int attendance = 75;

    if (marks >= 80) {
        if (attendance >= 75) {
            cout << "Scholarship Approved!";
        } else {
            cout << "Attendance is too low.";
        }
    } 
    else {
        cout << "below 80. Not eligible";
    }

    return 0;
}