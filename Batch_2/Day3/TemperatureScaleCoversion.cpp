#include <iostream>

using namespace std;

int main() {

    cout << "Enter Temperature Magnitude in C Scale:   " ;

    float temp;
    cin >> temp;

    float fahr;


    // F1

    fahr = temp*(9/5) + 32 ;

    cout << "Temp is " << fahr << endl;
    cout << temp << ".C = " << fahr << " .F" << endl;

    cout << endl << endl;

    // F2

    fahr = (temp*9)/5 + 32 ;

    cout << "Temp is " << fahr << endl;
    cout << temp << ".C = " << fahr << " .F" << endl;
    
    cout << endl << endl;


    // F3

    fahr = temp*(9/5.0) + 32 ;

    cout << "Temp is " << fahr << endl;
    cout << temp << ".C = " << fahr << " .F" << endl;


}