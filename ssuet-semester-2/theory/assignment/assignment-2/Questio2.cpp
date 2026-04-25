#include <iostream>
using namespace std;

int main() {
    // Required Identification Header
    cout << "Name: Muhammad Ayan Hashmi" << endl;
    cout << "Roll No: 2025F-BCE-226" << endl;
    cout << "Section: C" << endl;
    cout << "---------------------------" << endl;

    // L2 is the second last digit of your roll number (226 -> 2)
    int L2 = 2; 
    int numStudents = L2 + 3; // Total students: 5
    int marks[numStudents];
    int passCount = 0, failCount = 0;

    // Input loop for student marks
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter marks for student " << i + 1 << " (0-100): ";
        cin >> marks[i];
    }

    cout << "\n--- Grade Report ---" << endl;
    
    // Grading and Result Calculation
    for (int i = 0; i < numStudents; i++) {
        char grade;
        
        // Switch logic using integer division (marks/10)
        // This categorizes marks into ranges (e.g., 80-89 becomes case 8)
        switch (marks[i] / 10) {
            case 10:
            case 9:  
                grade = 'A'; 
                break;
            case 8:  
                grade = 'B'; 
                break;
            case 7:  
                grade = 'C'; 
                break;
            case 6:  
                grade = 'D'; 
                break;
            default: 
                grade = 'F'; 
                break;
        }

        cout << "Student " << i + 1 << ": Marks = " << marks[i] << ", Grade = " << grade << endl;

        // Passing criteria is 60 or above
        if (marks[i] >= 60) {
            passCount++;
        } else {
            failCount++;
        }
    }

    // Final Summary
    cout << "---------------------------" << endl;
    cout << "Total Passed: " << passCount << endl;
    cout << "Total Failed: " << failCount << endl;

    return 0;
}