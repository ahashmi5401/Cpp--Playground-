#include <iostream>
using namespace std;
main () {
    cout << "=====> Simple Calculaor <===== \n";
    cout << "=====> Enter Two Numbers <===== \n";
    float n1,n2;
    cout << "=====> Enter Value  For Number 1 <===== \n";
    cin>> n1;
    cout << "=====> Enter Value  For Number 2 <===== \n";
    cin>> n2;

    float sum , sub , mul , div;
    sum = n1 + n2 ;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;

    cout << "The SUM Of Given Two Number is =>" << sum  << "\n";
    cout << "The SUB Of Given Two Number is =>" << sub << "\n";
    cout << "The MULTIPLICATION Of Given Two Number is =>" << mul << "\n";
    cout << "The DIVISION Of Given Two Number is  =>" << div << "\n";

}