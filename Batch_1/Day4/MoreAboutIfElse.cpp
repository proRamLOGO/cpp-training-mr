#include <iostream>

using namespace std;

int main() {

    // If ELSE
    // SYNTAX

    // if ( CONDITION ) {
    //     // statements
    // }



    // [ else if ( CONDITION ) {
    //     // statements
    // } 
    // ... ]
    


    // [ else {

    // } ]

    cout << endl << endl;

    if ( (3 < 5) && (4 < 5) ) {
        cout << "IF BLOCK EXECUTED !!" << endl;
    } else {
        cout << "ELSE BLOCK EXECUTED !!" << endl;
    }

    cout << endl << endl;

    if ( (3 < 5) && (4 < 5) ) {
        cout << "IF BLOCK EXECUTED !!" << endl;
    }

    cout << endl << endl;

    if ( (3 <= 5) && (4 < 5) ) {
        cout << "IF BLOCK EXECUTED !!" << endl;
    } else {
        cout << "ELSE BLOCK EXECUTED !!" << endl;
    }

    cout << endl << endl;

    if ( (3 > 5) && (4 < 5) ) {
        cout << "IF BLOCK EXECUTED !!" << endl;
    } else {
        cout << "ELSE BLOCK EXECUTED !!" << endl;
    }

    cout << endl << endl;
    cout << endl << endl;

    // WITH VARIABLES
    
    int num1, num2;
    cin >> num1 >> num2;

    if ( (num1 < num2) || (num2 < num1) ) {
        cout << "NUMS ARE UNEUQAL --- FROM LINE 68" << endl;
    } else {
        cout << "NUMS ARE EQUAL" << endl;
    }


    cout << endl << endl;

    if ( (num1 < num2) || (num2 < num1) ) {
        cout << "NUMS ARE UNEUQAL --- FROM LINE 76" << endl;
    }

    cout << endl << endl;


    if ( num1 - num2 > 0 ) {
        cout << "NUM1" << 3453 << endl;
        cout << "NUM1" << "3453" << endl;
        cout << "NUM13453" << endl;
    }
    else if ( num1 - num2 < 0 ) {
        cout << "NUM2  ---- 86" << 3453 << endl;
    }
    else {
        cout << "EQUAL" << 3453 << endl;
    }


    cout << endl << endl;



    if ( num1 - num2 > 0 ) {
        cout << "NUM1" ;
    }
    else if ( num1 - num2 < 0 ) {
        cout << "NUM2  ---- 101" ;
    }
    else {
        cout << "EQUAL" ;
    }
    cout  << 3453 << endl;



    cout << "END OF PROGRAM" << endl << endl;


}