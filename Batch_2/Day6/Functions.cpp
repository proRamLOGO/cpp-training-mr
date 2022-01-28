#include<iostream>
using namespace std;

// SYNTAX

// RETURN_VALUE_DTP FUNCTION_SIGNATURE(DTP PARAM_1, DTP PARAM_2, .......,  DTP PARAM_N) {
//     STATEMENTS
//     ...
//     return VALUE;
// }

int factorial(int num) {

    int fact=1;
    for ( int i = 2 ; i <= num ; i++)
        fact *= i;
    return fact;
}

int main() {
    
    int n;
    cin >> n;

    int fact = factorial(n);
    cout << fact << endl;
    
    cout << factorial(n) << endl;
    
    if (factorial(n)%2==0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

}