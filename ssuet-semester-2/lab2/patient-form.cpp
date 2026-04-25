#include <iostream>
using namespace std;

int main() {
    string name, address, department, doctorName, date;
    int age, contact, dues;
    const int patient_Id = 8281;

    
    cout << "Enter Name (No Spaces): ";
    cin >> name;

    cout << "Enter Address (No Spaces): ";
    cin >> address;

    cout << "Enter Department: ";
    cin >> department;

    cout << "Enter Doctor Name: ";
    cin >> doctorName;

    cout << "Enter Date: ";
    cin >> date;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Contact: ";
    cin >> contact;

    cout << "Enter Dues: ";
    cin >> dues;

    
    cout << "Patient ID: " << patient_Id << endl;
    cout << "Name:       " << name << endl;
    cout << "Age:        " << age << endl;
    cout << "Address:    " << address << endl;
    cout << "Dept:       " << department << endl;
    cout << "Doctor:     " << doctorName << endl;
    cout << "Date:       " << date << endl;
    cout << "Contact:    " << contact << endl;
    cout << "Total Dues Payable: " << dues << " PKR" << endl;

    return 0;
}