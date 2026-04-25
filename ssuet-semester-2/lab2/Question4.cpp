#include <iostream>

using namespace std;

int main() {
    int eggsPerBasket;
    int numberOfBaskets;
    int eggsToRemove;
    int totalEggs;

    // Part A: Initial Input and Calculation
    cout << "Enter the number of eggs in each basket: " << endl;
    cin >> eggsPerBasket;

    cout << "Enter the number of baskets: " << endl;
    cin >> numberOfBaskets;

    totalEggs = eggsPerBasket * numberOfBaskets;

    cout << "If you have" << endl;
    cout << eggsPerBasket << " eggs per basket and" << endl;
    cout << numberOfBaskets << " baskets, then" << endl;
    cout << "the total number of eggs is " << totalEggs << endl;

    // Part B: Altered Scenario (User Input for removal)
    cout << "How many eggs would you like to take from each basket?" << endl;
    cin >> eggsToRemove;

    eggsPerBasket = eggsPerBasket - eggsToRemove;
    totalEggs = eggsPerBasket * numberOfBaskets;

    cout << "Now we take " << eggsToRemove << " eggs out of each basket." << endl;
    cout << "You now have" << endl;
    cout << eggsPerBasket << " eggs per basket and" << endl;
    cout << numberOfBaskets << " baskets." << endl;
    cout << "The new total number of eggs is " << totalEggs << endl;

    return 0;
}