#include <iostream>
using namespace std;

int main() {

    // 2. DO WHILE LOOP
    // SYNTAX
    // do {
    //     STATEMENTS
    //     ...
    // } while ( CONDITION ) ;
    // Will definitely execute once

    int n;
    cin >> n;
    int f=1, i=1;

    if ( n<0 ) {
        cout << "FACT FOR NEGATIVE NUMBER NOT DEFINED";
    } else {

        while ( i<=n ) {
            f = f*i;
            i = i+1;
            cout << "while loop" << endl;
        }

        cout << "Fact is " << f << endl;

    }

    cout << endl << endl;
    
    
    f=1, i=1;

    do {
        f = f*i;
        i = i+1;
        cout << "DO WHILE loop" << endl;
    } while ( i<=n ) ;

    cout << "Fact is " << f << endl;

    cout << endl << endl;

    
    
    do {
        cin >> n;
    } while ( n<0 );

    f=1;
    i=1;
    while ( i<=n ) {
        f=f*i;
        cout << "Loop has ran" << i << "times" << endl;
        i=i+1;
    }

    cout << "Fact is " << f << endl;

    cout << endl << endl;



    int num1, num2;
    int counter = 0;
    do {
        cout << "ENTER 2 NUMBERS FOR COMPARISON:    " ;
        cin >> num1 >> num2;
        counter = counter + 1;
        cout << "this was input number " << counter << endl;
    } while (num1==num2 && counter < 5);

    if ( num1<num2 ) {
        cout << "LARGER IS NUM2" << endl;
    } else if ( num1>num2 ) {
        cout << "LARGER IS NUM1" << endl;
    } else {
        cout << "NUMS ARE EQUAL" << endl;
    }

    cout << endl << endl;


}