
#include <iostream>
using namespace std;

int main() {
    float obtainedMarks, totalMarks = 500.0; 
    float percentage;

    cout << "Enter Obtained Marks: \t";
    cin >> obtainedMarks;

    percentage = (obtainedMarks / totalMarks) * 100.0;

    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 80) {
        cout << "Grade: A" << endl;
    } 
    else if (percentage >= 70) {
        cout << "Grade: B" << endl;
    } 
    else if (percentage < 60) {
        cout << "Fail" << endl;
    } 
    else {
        cout << "..." << endl;
    }

    return 0;
}