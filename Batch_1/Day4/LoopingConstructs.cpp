#include<iostream>
using namespace std;

int main() {

    // LOOPRING CONSTRUCTS

    // 1. WHILE LOOP
    // SYNTAX

    // while ( CONDITION ) {
    //     STATEMENTS
    //     ...
    // }

    // FACTORIAL n!

    cout << "Enter a number:  ";

    int n;
    cin >> n;

    int fact, i;
    fact = 1;
    i = 1;

    while ( i <= n ) {
        
        cout << "Changing fact from  " << fact;
        
        fact = fact * i;

        cout << " to " << fact << endl;

        i = i + 1;
        
    }

    cout << n << "! = " << fact << endl;

}