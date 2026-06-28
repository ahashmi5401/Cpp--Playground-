#include <iostream>
#include <fstream>
using namespace std;

void enterCar(int *total){
    (*total)++ ;
    cout<<"Car Enter " << endl;
    cout<<"Total Parked Car : "<< *total << endl;
}

int exitCar(int *total){
    if(*total == 0){
        cout<<"No car in parking";
        return 0;
    }
    (*total)--;
    cout<<"total car left after exit of car  " << *total << endl;
}

int main(){
    static int totalParkedCar = 0;
    int choice ;

    cout << "Menu Enter Number Acc to action " << endl;
    cout<<"1.Enter Car \n 2.Exit Car \n 3.Show Total Car \n 4. Exit Program : \n";
    cin>>choice;

    
    switch(choice){
        case 1 :
          enterCar(&totalParkedCar);
          break;
        case 2:
          exitCar(&totalParkedCar);
          break;
        case 3:
          cout<<"Total Parked Cars" << totalParkedCar << endl;
          break;
        case 4:
        cout<<"End Hogaya " << endl ;
        break;
    }
    return 0;
}

