#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string name;
    int rollNo;
    float marks;
    char choice;

    ofstream outFile("results.txt");

    do
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;

        outFile << name << " " << rollNo << " " << marks << endl;

        cout << "\nDo you want to enter another student? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    outFile.close();

    // Reading data from file
    ifstream inFile("results.txt");

    cout << "\n--- Student Records ---\n";

    while (inFile >> name >> rollNo >> marks)
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "------------------------" << endl;
    }

    inFile.close();

    return 0;
}