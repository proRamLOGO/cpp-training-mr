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

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;


    // APPROACH 0 FLOWCHART 
    if ( n1>n2 && n1>n3 ) {
        cout << "N1" << endl;
    } else {
        
        if ( n2>n1 && n2>n3 ) {
            cout << "N2" << endl;
        } else {
        
            if ( n3>n1 && n3>n2 ) {
                cout << "N3" << endl;
            } else {
                cout << "DUPLICATE LARGER NUMBER OR ALL EQUAL" << endl;
            }
        }
    }

    cout << endl << endl ;


    // APPROACH 1
    if ( n1>n2 && n1>n3 ) {
        cout << "N1" << endl;
    }
    else if ( n2>n1 && n2>n3 ) {
        cout << "N2" << endl;
    }
    else if ( n3>n2 && n1<n3 ) {
        cout << "N3" << endl;
    } else {
        cout << "DUPLICATE LARGER NUMBER OR ALL EQUAL" << endl;
    } 
    
    
    cout << endl << endl ;

}