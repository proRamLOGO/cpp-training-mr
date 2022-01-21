#include <iostream>
using namespace std;

int main() {

    // IF ELSE
    // SYNTAX
    // if ( CONDITION ) {
    //     STATEMENTS
    //     ...
    // }
    // [ else if ( CONDITION ) {
    //     STATEMENTS
    //     ...
    // } 
    // ... ]
    // [ else {
    //     STATEMENTS
    //     ...
    // } ]

    cout << endl << endl ;

    if ( (3<5) && (4<5) ) { 
        cout << "ITS ONLY LOGICAL!!" << endl;
    }

    if ( (3<5) && (4>5) ) { 
        cout << "4 is greater than five" << endl;
    }

    if ( (3>5) && (4<5) ) { 
        cout << "3 is greater than 5" << endl;
    }

    if ( (3>5) && (4>5) ) { 
        cout << "Hi this is a parallel univ where not only 3>5 but also 4>5" << endl;
    }

    cout << endl << endl ;


    // 2. Conditional Operators (>,<,>=,<=,!=,==)
    cout << "5> 3 = " << (5>3) << endl ;
    cout << "5< 3 = " << (5<3) << endl ;
    cout << "5>=3 = " << (5>=3) << endl ;
    cout << "5<=3 = " << (5<=3) << endl ;
    cout << "5!=3 = " << (5!=3) << endl ;
    cout << "5==3 = " << (5==3) << endl ;

    cout << "4>=7 = " << (4>=7) << endl;

    cout << endl << endl ;

    int num1, num2;
    cin >> num1 >> num2;
    bool res;

    res = (num1>=num2);
    cout << num1 << ">=" << num2 << " = " << res << endl;
    cout << num1 << ">=" << num2 << " = " << (num1>=num2) << endl;

    cout << endl << endl ;

    // 3. Logical Operators
    // (AND &&, OR ||, NOT !)

    cout << "( 3<5 && 4<5 ) = " << ( 3<5 && 4<5 ) << endl; // 1 1 -> 1
    cout << "( 3>5 && 4<5 ) = " << ( 3>5 && 4<5 ) << endl; // 0 1 -> 0
    cout << "( 3<5 && 4>5 ) = " << ( 3<5 && 4>5 ) << endl; // 1 0 -> 0
    cout << "( 3>5 && 4>5 ) = " << ( 3>5 && 4>5 ) << endl; // 0 0 -> 0

    cout << endl;

    cout << "( 3<5 || 4<5 ) = " << ( 3<5 || 4<5 ) << endl; // 1 1 -> 1
    cout << "( 3>5 || 4<5 ) = " << ( 3>5 || 4<5 ) << endl; // 0 1 -> 1
    cout << "( 3<5 || 4>5 ) = " << ( 3<5 || 4>5 ) << endl; // 1 0 -> 1
    cout << "( 3>5 || 4>5 ) = " << ( 3>5 || 4>5 ) << endl; // 0 0 -> 0

    cout << endl << endl ;
 
    if ( num1 > num2 || num2 > num1 ) {
        cout << "UNEQUAL NUMS" << endl;
    } else {
        cout << "NUMS ARE EQUAL" << endl;
    }
 
    cout << endl << endl ;

}