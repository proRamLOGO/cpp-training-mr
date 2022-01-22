#include <iostream>
using namespace std;

int main() {

    // 1. WHILE LOOP
    // SYNTAX
    // while ( CONDITION ) {
    //     STATEMENTS
    //     ...
    // }
    cout << endl << endl;
    int n;
    cin >> n;


    // APPROACH 1
    int fact = 1, i = 1;

    while ( i <= n ) {
        cout << "Changing fact from " << fact;
        
        fact = fact * i;
        
        cout << " to " << fact << " and i from " << i << " to ";
        
        i = i + 1;
        
        cout << i << endl << endl;
    }

    cout << n << "! = " << fact << endl;
    cout << endl << endl;


    // APPROACH 2

    fact = 1;
    i = n;

    while ( i > 1 ) {
        fact = fact*i;
        i = i-1;
    }
    cout << endl << endl;


    // APPROACH 3 - HW

    fact = 1;
    while ( n>1 ) {
        fact = fact * n;
        n = n - 1;
    }

    cout << n << "! = " << fact << endl;

}