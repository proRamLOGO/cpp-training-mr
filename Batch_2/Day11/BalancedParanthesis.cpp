#include <iostream>
#include <stack>

using namespace std;

bool isBalancedParanthesis(string s) {
    // n = |s|
    // 0 <  n  <= 1000000
    // 0 < |s| <= 1000000

// (((((((()())))))))
// (((((((((((((((((( n = 10^6

    // SPACE: O(n)
    // Time: O(n)

    stack<char> stk;

    for ( char ch:s ) {
        if ( ch == '(')
            stk.push('(');
        else {
            if ( !stk.empty() ) {
                stk.pop();
            } else {
                // ANS IS NO
                return false;
            }
        }
    }
    return stk.empty();

    // if ( stk.empty() ) {
    //     return true;
    // } else {
    //     return false;
    // }
}

bool isBalancedParanthesis_Avinash(string s) {

    // SPACE: O(1) - Constant 
    // Time: O(n) - Linear Time Complexity

    int balance = 0;

    for ( char ch:s ) {
        if ( ch == '(')
            balance++;
        else {
            if ( balance>0 ) {
                balance--;
            } else {
                // ANS IS NO
                return false;
            }
        }
    }
    return !balance;
}

int main() {

    string s;
    cin >> s;
    
    if (isBalancedParanthesis(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    if (isBalancedParanthesis_Avinash(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}