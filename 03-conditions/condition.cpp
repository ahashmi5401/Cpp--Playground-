#include <iostream>
using namespace std;

// grading 
main () {
    int obtainMarks ;
    int totalMarks ;
    cout << "PERCENTAGE AND GRADE CACULATOR";

    //total marks
    cout << "\n Enter Total Marks =>";
    cin >> totalMarks ;

    //obtained mask
    cout << "\n Enter Obtain Marks Marks =>";
    cin >> obtainMarks;


    //formula of percentage 
    float percentage = (obtainMarks * 100)/550;

    //condition for grading according to percentage 
    if(percentage  < 33){
        cout << percentage << "%" << "\n";
        cout << "fail";
    }
    else if (percentage >= 80){
        cout << "Congratulations  \n";
        cout << percentage << "%" << "\n";
        cout << "A+";
    }
    else if (percentage >= 70 && percentage < 80) {
        cout << percentage << "%" << "\n";
        cout << "A";
    }
    else if (percentage >= 60 && percentage < 70){
        cout << percentage << "%" << "\n";
        cout << "B";
    }
    else if (percentage >= 50 &&  percentage < 60){
        cout << percentage << "%" << "\n";
        cout << "C  ";
    }
    else if (percentage >= 40 && percentage < 50){
        cout << percentage << "%" << "\n";
        cout << "D";
    }
    else if (percentage >= 34 && percentage < 40){
        cout << percentage << "%" << "\n";
        cout << "E";
    }
    else {
        cout << "write valid input ";
    }
}