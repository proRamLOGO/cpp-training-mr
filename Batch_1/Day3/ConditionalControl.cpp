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


    int num1, num2;
    cin >> num1 >> num2;


    // Approach 1 BUGGED NOT WORKING ON EQULAS
    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    } else {
        cout << "Larger is num2 = " << num2 << endl;
    }

    cout << endl << endl;
    
    // Approach 2
    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    } else if ( num1 < num2 ) {
        cout << "Larger is num2 = " << num2 << endl;
    } else {
        cout << "nums equal" << endl;
    }

    cout << endl << endl;
    
    // Approach 0
    if ( num1 > num2 ) {
    
        cout << "Larger is num1 = " << num1 << endl;
    
    } else {
    
        if ( num1 < num2 ) {
            cout << "Larger is num2 = " << num2 << endl;
        } else {
            cout << "nums equal" << endl;
        }

    }

    cout << endl << endl;
    
    // Approach 3
    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    } else if ( num1 == num2 ) {
        cout << "nums equal" << endl;
    } else if ( num2 > num1 ) {
        cout << "Larger is num2 = " << num2 << endl;
    }


    // Approach 4
          
    if ( num1 > num2 ) {
        cout << "Larger is num1 = " << num1 << endl;
    } 
    if ( num1 == num2 ) {
        cout << "nums equal" << endl;
    } 
    if ( num2 > num1 ) {
        cout << "Larger is num2 = " << num2 << endl;
    }

}