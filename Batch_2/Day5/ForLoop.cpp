#include <iostream>

using namespace std;

int main() {

    // 3. For Loop
    // SYNTAX

    // for ( INITIALIZATION ; CONDITION OF TERMINATION ; INCREMENT, DECREMENT ) {
    //     STATEMENTS
    //     ...
    // }

    int n;
    cin >> n;

    int fact=1,i;

    for ( i=1 ; i<=n ; i=i+1 ) {
        fact = fact*i;
    }

    cout << "Fact is " << fact << endl << endl;
    
    
    fact=1;

    for ( i=1 ; i<=n ; i+=1 ) {
        fact = fact*i;
    }

    cout << "Fact is " << fact << endl << endl;
    
    
    fact=1;

    for ( i=1 ; i<=n ; i++ ) {
        fact = fact*i;
    }

    cout << "Fact is " << fact << endl << endl;


}