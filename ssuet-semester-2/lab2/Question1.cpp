#include <iostream>
#include <string>

using namespace std;

int main() {
    // Constants must be initialized immediately
    const int patientID = 123; 
    
    string fullName, contact, address, dept, doctor, date;
    int age;
    bool hasDues;

    // Input Section
    cout << "Enter Full Name: ";
    getline(cin, fullName);
    
    cout << "Enter Age: ";
    cin >> age;
    cin.ignore(); // Clear buffer after cin >> to allow getline to work

    cout << "Enter Contact No: ";
    getline(cin, contact);

    cout << "Enter Address: ";
    getline(cin, address);

    cout << "Enter Department Name: ";
    getline(cin, dept);

    cout << "Enter Assigned Doctor: ";
    getline(cin, doctor);

    cout << "Enter Date: ";
    getline(cin, date);

    cout << "Are there remaining dues? (1 for true, 0 for false): ";
    cin >> hasDues;

    // Output Section
    cout << "\n***************************************************" << endl;
    cout << "PATIENT RECORD" << endl;
    cout << "***************************************************" << endl;
    cout << "Patient's ID:\t" << patientID << " (Constant)" << endl;
    cout << "Full name:\t" << fullName << endl;
    cout << "Age:\t\t" << age << endl;
    cout << "Contact no:\t" << contact << endl;
    cout << "Address:\t" << address << endl;
    cout << "Department:\t" << dept << endl;
    cout << "Assigned Doctor:" << doctor << endl;
    cout << "Date:\t\t" << date << endl;
    cout << "Dues:\t\t" << hasDues << endl;
    cout << "***************************************************" << endl;

    /* TRYING TO CHANGE THE CONST VALUE:
       The following line is commented out because it will cause a 
       COMPILATION ERROR: "assignment of read-only variable 'patientID'"
    */
    // patientID = 456; 

    return 0;
}