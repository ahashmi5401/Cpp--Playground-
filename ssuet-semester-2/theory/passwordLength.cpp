#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter Password: "; 
    

    getline(cin, password);

    if (password.length() > 8) {
        cout << boolalpha << true << endl;
    } else {
        cout << boolalpha << false << endl;
    }

    return 0;
}