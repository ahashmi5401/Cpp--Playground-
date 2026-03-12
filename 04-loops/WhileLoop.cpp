// While Loop
// Example Password Generator By using While Loop

#include <iostream>
#include <cstdlib>  // for rand() //for random number generate 
#include <ctime>    //unique pass generate 
using namespace std;

main()
{
    srand(time(0)); // ← add this, so password changes every run
    int no = 0;
    string password = "";
    string wordBank = "2321idusdusuas&^%^&*()dsiGDSKAYHND23456789UHGVCDSFGXSUU@#$%^tfc%yh";
    while (no < 8)
    {
        int randomNo = rand() % wordBank.length();
        cout << randomNo << "\n";
        password += wordBank[randomNo];
        no++;
    }
    cout << "password => " << password ;
}


