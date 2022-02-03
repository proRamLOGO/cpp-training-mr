#include <iostream>
#include<stack>
using namespace std;

int main() {

    string s;
    cin >> s;
    
    stack<char> stk;

    bool flag = false;

    for ( char ch:s ) {
        if ( ch=='(' ) {
            stk.push('('); //5
        } else {
            if ( stk.empty() ) { //1
                cout << "NO" << endl;
                flag = true;
                break;
            }
            stk.pop(); //4
        }
    }

    if ( !stk.empty() )
        cout << "NO" << endl;
    else if ( !flag ) {
        cout << "YES" << endl;
    }
    
}
