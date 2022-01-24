#include <iostream>

using namespace std;

int main() {

    // 3. For Loop
    // SYNTAX

    // for ( INITIALIZATION ; CONDITION OF TERMINATION ; INCREMENT, DECREMENT ) {
    //     STATEMENTS
    //     ...
    // }

    int n,d;
    cin >> n;


    // Approach 1. n ops
    bool isPrime = true;

    for ( d=2 ;    d<n   &&   isPrime==true   ; d++ ) {
        if ( n%d == 0 ) {
            isPrime = false;
            cout << d << " NOT PRIME" << endl;
        } 
    }
    if ( isPrime==true ) {
        cout << "NUM IS PRIME" << endl << endl ;
    }



    // Approach 2. n/2 ops
    isPrime = true;

    for ( d=2 ;    d<=n/2   &&   isPrime==true   ; d++ ) {
        if ( n%d == 0 ) {
            isPrime = false;
            cout << d << " NOT PRIME" << endl;
        } 
    }
    if ( isPrime==true ) {
        cout << "NUM IS PRIME" << endl << endl ;
    }

    //               _
    // Approach 3. _/n ops
    isPrime = true;

    for ( d=2 ;    d*d<=n   &&   isPrime==true   ; d++ ) {
        if ( n%d == 0 ) {
            isPrime = false;
            cout << d << " NOT PRIME" << endl;
        } 
    }
    if ( isPrime==true ) {
        cout << "NUM IS PRIME" << endl << endl ;
    }




    cout << endl << endl ;
}