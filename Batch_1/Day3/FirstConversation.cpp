#include <iostream>

using namespace std;

int main() {

    // Output
    // cout << ENTITY1 << ENTITY2 << ...... ENTITY_N ;

    // Print "Hello ",name, "! How are you ?"
    // cout << "Hello " << name << "! How are you ?";

    cout << "    Hello Everyone    " << endl ;
    cout << 3 << " + " << 5 << " = " << 8 << endl ;
    cout << 3 << " + " << 5 << " = " << 3+5 << endl ;
    cout << 3 << " + " << 5 << " = " << "3+5" << endl ;

    // Input (Requires variable)

    // Declare Variable Syntax
    // DATA_TYPE VAR_NAME_1, VAR_NAME_2 ... ;

    string name;

    // Input Syntax
    // cin >> VAR_1 >> VAR_2 .... >> VAR_N;

    cin >> name;
    cout << "Hello " << name << "! How are you ?" << endl;

}