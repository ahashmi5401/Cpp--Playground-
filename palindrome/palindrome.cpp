#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to check if a word is palindrome
bool isPalindrome(string word) {
    int start = 0;
    int end = word.length() - 1;

    while (start < end) {
        if (word[start] != word[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// Function to convert string to lowercase
string toLowerCase(string word) {
    for (int i = 0; i < word.length(); i++) {
        word[i] = tolower(word[i]);
    }
    return word;
}

int main() {
    string word;
    char again;

    cout << "================================" << endl;
    cout << "      PALINDROME CHECKER        " << endl;
    cout << "================================" << endl;

    do {
        cout << "\nEnter a word: ";
        cin >> word;

        string lowerWord = toLowerCase(word);

        if (isPalindrome(lowerWord)) {
            cout << "\"" << word << "\" IS a palindrome! :)" << endl;
        } else {
            cout << "\"" << word << "\" is NOT a palindrome. :(" << endl;
        }

        cout << "\nCheck another word? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nGoodbye!" << endl;

    return 0;
}