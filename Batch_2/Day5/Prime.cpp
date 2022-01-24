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

    bool isPrime = true;

    for ( d=2 ;    d<n   &&   isPrime==true   ; d++ ) {
        if ( n%d == 0 ) {
            isPrime = false;
            cout << d << " NOT PRIME" << endl;
        } 
    }
// 1. d==n
// 2. isprime false

    if ( isPrime==true ) {
        cout << "NUM IS PRIME" << endl;
    }

}