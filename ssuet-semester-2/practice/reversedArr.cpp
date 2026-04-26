#include <iostream>
#include <algorithm> // swap ke liye
using namespace std;

// 1. Function to reverse and print (as per your logic)
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Array ko print karne ke liye loop zaroori hai
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 2. Main function
int main() {
    int myArr[] = {10, 20, 30, 40, 50};
    int n = sizeof(myArr) / sizeof(myArr[0]); 

    cout << "Original Array: ";
    // Yahan direct loop chala dete hain taake extra function na banana paray
    for (int i = 0; i < n; i++) {
        cout << myArr[i] << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    reverseArray(myArr, n); // Function call aur printing sath hi ho jayegi

    return 0;
}