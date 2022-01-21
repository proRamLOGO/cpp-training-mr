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


    // // CAN HAVE
      
    // if

    // if
    // else

    // if 
    // else if 
    // else 
    
    // if 
    // else if 
    // else if 
    // else if 
    // else if 
    // else 
    
    // if 
    // else if 
    // else if 
    // else if 
    // else if 

    // // CANNOT HAVE

    // else if 
    // else 
    
    // else if 
    // else if 
    // else if 
    // else if 
    // else 

    // else if 
    // else if 
    // else if 
    // else if 

    // if 
    // else 
    // else 
    // else 

    // if 
    // else if  
    // else if 
    // else 
    // else 
    
    cout << endl << endl << "Enter 2 numbers:  " ;

    int num1, num2 ;
    cin >> num1 >> num2 ;

    // FLOWCHATT CODE
    // APPROACH 0
    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    } else {

        if ( num1 < num2 ) {
            cout << "Larger is num2 = " << num2 << endl;
        } else {
            cout << "Nums are equal" << endl;
        }

    }

    cout << endl << endl ;

    // APPROACH 1

    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    } else if ( num1 < num2 ) {
        cout << "Larger is num2 = " << num2 << endl;
    } else {
        cout << "Nums are equal" << endl;
    }


    cout << endl << endl ;

    // APPROACH 2

    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    } else if ( num1 == num2 ) {
        cout << "Nums are equal" << endl;
    } else {
        cout << "Larger is num2 = " << num2 << endl;
    }


    cout << endl << endl ;

    // APPROACH 3

    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    }
    if ( num1 == num2 ) {
        cout << "Nums are equal" << endl;
    }
    if ( num1 < num2 ) {
        cout << "Larger is num2 = " << num2 << endl;
    }


    cout << endl << endl ;

    // APPROACH 4

    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    }
    if ( num1 == num2 ) {
        cout << "Nums are equal" << endl;
    }
    else if ( num1 < num2 ) {
        cout << "Larger is num2 = " << num2 << endl;
    }


    cout << endl << endl ;

    // APPROACH 5
    
    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    }
    if ( num1 == num2 ) {
        cout << "Nums are equal" << endl;
    }
    else {
        cout << "Larger is num2 = " << num2 << endl;
    }

    cout << endl << endl ;


    // DTP IS BOOL

    if ( 3<5 ) {
        cout << "qwerty" << endl;
    } else {
        cout << "keypad" << endl;
    }

    cout << endl << endl ;

    if ( 3>5 ) {
        cout << "qwerty" << endl;
    } else {
        cout << "keypad" << endl;
    }


    cout << endl << endl ; 


    if ( num1 < 0 ) {
        cout << "negative" << endl;
    } else if ( num1 > 0 ) {
        cout << "positive" << endl;
    } else {
        cout << "0" << endl;
    }


    cout << endl << endl ;    


    if ( num1*num2 < 0 ) {
        cout << "either of numbers is negative" << endl;
    } else {
        cout << "both numbers either +ve or -ve" << endl;
    }


    cout << endl << endl ;    
}