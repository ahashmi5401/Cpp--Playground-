#include <iostream>
#include <algorithm>
using namespace std;

void ascendingArr(int arr[], int n) {
    int i = 0;
    while (i < n - 1) {
        for (int j = 0; j < n - i - 1; j++) {
            // Check the neighbors
            if (arr[j] > arr[j + 1]) {
                // Swap the neighbors, not i
                swap(arr[j], arr[j + 1]); 
            }
        }
        i++;
    }
}

int main() {
    int arr[] = {4, 2, 3, 1};
    // Calculate the actual number of elements
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Original: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    ascendingArr(arr, n);

    cout << "Sorted:   ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}