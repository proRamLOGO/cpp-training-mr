#include <iostream>
using namespace std;

int main() {

    // IF ELSE
    // SYNTAX
    // if ( CONDITION ) {
    //     STATEMENTS
    //     ...
    // }
    // [ else if ( CONDITION ) {
    //     STATEMENTS
    //     ...
    // } 
    // ... ]
    // [ else {
    //     STATEMENTS
    //     ...
    // } ]

    cout << endl << endl ;

    int num;
    cin >> num;

    cout << "REM IS " << (num%2) << endl << endl;
    cout << "REM IS " << (num%-2) << endl << endl;

    if ( num%2 == 0 ) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

    cout << endl << endl ;


    if ( num%2 != 0 ) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }



    cout << endl << endl ;

    if ( (num%2 != 0) || (num%2 != 1)  ) {
        cout << "HEY!" << endl;
    } 

    cout << endl << endl ;

    if ( (num%2 != 0) && (num%2 != 1)  ) {
        cout << "!THERE" << endl;
    } 

    cout << endl << endl ;

    

}