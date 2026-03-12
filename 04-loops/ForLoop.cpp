//For Loop ;
//example sum of even and odd  number 0 to 100;

#include <iostream>
using namespace std;

main(){
    int even = 0;
    int odd = 0;
    for (int a = 1 ; a <= 100 ; a++){
        if (a % 2 == 0){
            even += a;
        }
        else if (a % 2 != 0) {
            odd += a;
        }
    }
    cout << "SUM OF EVEN NUMBER O TO 100 IS " << even ;
    cout << "\n SUM OF ODD NUMBER O TO 100 IS " << odd ;
}

