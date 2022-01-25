#include <iostream>

using namespace std;

// SYNTAX of FUNCTION

// DTP_OF_RETURN_VALUE FUNCTION_SIGNATURE(DTP PARAM_1, DTP PARAM_2, ...., DTP PARAM_N) {
//     STATEMENTS
//     ...
//     ...
//     return RETURN_VALUE ;
// }


int factorial( int num ) {

    int fact=num;
    
    for ( int i = 2 ; i < num ; ++i ) {
        fact *= i;
    }
    
    return fact;
    
    int i;
    for ( i = 2 ; i < num ; ++i ) {
        fact *= i;
    }

}


int main() { // for main return statements can be excused.

    int n;
    cin >> n;

    cout << factorial(n) << endl;
    
    int fact = factorial(n);
    cout << fact << endl;

}