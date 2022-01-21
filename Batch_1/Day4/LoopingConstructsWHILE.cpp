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
    
    // MIGHT NOT EXECUTE

    // FACTORIAL n!

    cout << "Please enter a num:  ";  

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

    cout << endl << endl;

    // 2. DO WHILE LOOP
    // SYNTAX

    // do {
    //     STATEMENTS
    //     ...
    // } while ( CONDITION );

    // WILL EXECUTE ONCE FORRRRR SUREEEEEE !!!!!!!!!!!!

    fact = 1;
    i = 1;

    do {
        
        cout << "Changing fact from  " << fact;
        
        fact = fact * i;

        cout << " to " << fact << endl;

        i = i + 1;
        
    } while ( i <= n );

    cout << n << "! = " << fact << endl;

    cout << endl << endl;


    // INFINITE LOOP CODE
    // while ( 1<2 ) {
    //     cout << "HOLA!! PEPSI COLA  " ;
    // }

    fact = 1;
    i = 1;

    while ( i <= n ) {
        
        cout << "Changing fact from  " << fact;
        
        fact = fact * i;

        cout << " to " << fact << endl;

        i = i + 1;
        
    }

    cout << n << "! = " << fact << endl;

    cout << endl << endl;

}


// i     | 1 3 5  
// n     | 5
// fact  | 1 3 15

// FOR LOOPS
// ARRAYS