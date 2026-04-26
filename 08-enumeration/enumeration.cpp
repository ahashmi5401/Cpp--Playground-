#include <iostream>
using namespace std;
  enum Level
    {
        LOW = 25,
        MEDIUM = 50,
        HIGH = 75
    };
    
main()
{
    Level myVar = MEDIUM;
    cout << "value of myVar is =>" << myVar << "\n";

    switch (myVar){
        case  25: 
              cout << "LOW LEVEL";
              break;
        case  50 :
              cout << "MEDIUM LEVEL";
              break;
        case  75 :
              cout << "HIGH LEVEL";
              break;
        default :
              cout << "MuhammadAyan Hashmi";
              break;
    }
    return 0;
}