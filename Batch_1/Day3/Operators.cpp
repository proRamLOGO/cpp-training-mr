#include <iostream>

using namespace std;

int main() {

    // 1. Arithmetic Operators (+,-,/,*,%)
    int num1, num2;
    cin >> num1 >> num2;
    int mod = num1 % num2;
    cout << "Mod is " << mod << endl;

    cout << endl << endl;

    // 2. Conditional Operators (>,<,>=,<=,!=,==)
    cout << "5> 3 = " << (5>3) << endl ;
    cout << "5< 3 = " << (5<3) << endl ;
    cout << "5>=3 = " << (5>=3) << endl ;
    cout << "5<=3 = " << (5<=3) << endl ;
    cout << "5!=3 = " << (5!=3) << endl ;
    cout << "5==3 = " << (5==3) << endl ;

    cout << "4>=7 = " << (4>=7) << endl;

    cout << endl << endl ;

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

    cout << endl;

    cout << "3>5 = " << ( 3>5 ) << endl; 
    cout << "!(3>5) = " << !( 3>5 ) << endl; 
    

}