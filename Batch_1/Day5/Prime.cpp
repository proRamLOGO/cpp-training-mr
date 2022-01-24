#include <iostream>

using namespace std;

int main() {

    // 3. For Loop
    // SYNTAX

    // for ( INITIALIZATION ; CONDITION OF TERMINATION ; INCREMENT, DECREMENT ) {
    //     STATEMENTS
    //     ...
    // }

    int n,d,counter;
    cin >> n;

    // APPROACH 1 n ops -----------------------------
    bool isPrime = true;

    for ( d = 2, counter = 0 ;   ( (d < n) && isPrime )    ; d++, counter++ ) {
        if ( n%d == 0  ) {
            isPrime = false;
            cout << "NOT PRIME    " << counter <<  endl;
        } 
    }

    if ( isPrime==true ) {
        cout << "PRIME      " << counter << endl;
    }


    cout << endl << endl;

    // APPROACH 2   n/2 ops -----------------------------

    isPrime = true;

    for ( d = 2, counter = 0 ;   ( (d <= n/2) && isPrime )    ; d++, counter++ ) {
        if ( n%d == 0  ) {
            isPrime = false;
            cout << "NOT PRIME    " << counter <<  endl;
        } 
    }

    if ( isPrime==true ) {
        cout << "PRIME      " << counter << endl;
    }



    cout << endl << endl;

    //                _
    // APPROACH 3   _/n ops -----------------------------

    isPrime = true;

    for ( d = 2, counter = 0 ;   ( (d*d <= n) && isPrime )    ; d++, counter++ ) {
        if ( n%d == 0  ) {
            isPrime = false;
            cout << "NOT PRIME      " << counter << endl;
        } 
    }

    if ( isPrime==true ) {
        cout << "PRIME      " << counter << endl;
    }


    cout << endl << endl;

    //                _
    // APPROACH 3.1   _/n ops -----------------------------

    isPrime = true;

    for ( d = 2, counter = 0 ;  d*d <= n  ; d++, counter++ ) {
        if ( n%d == 0  ) {
            isPrime = false;
            cout << "NOT PRIME      " << counter << endl;
            break;
        } 
    }

    if ( isPrime==true ) {
        cout << "PRIME      " << counter << endl;
    }

}