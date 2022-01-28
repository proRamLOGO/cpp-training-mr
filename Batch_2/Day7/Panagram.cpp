// Q. Given a string tell if that string is panagram or not, Print a YES or NO.

// "qwertyuiopasdfghjklzxcvbnm" = true
// "thqequickbrownfoxjumpsoverlazydog" = true
// "proRam" = false;
// "shubh" = false;


// string s;
// char s[n];

#include<iostream>
using namespace std;


int getIdx(char ch) {
    return (int)ch - 97;
}

bool isPanagram(string s) {

    bool isCharPresent[26];

    for ( int i = 0 ; i < s.length() ; i++ ) {
        char ch = s[i];
        isCharPresent[getIdx(ch)] = true;
    }

    // all chars that are preset are marked true.

    for ( int i = 0 ; i < 26 ; i++ )
        if ( !isCharPresent[i] )
            return false;
    
    return true;

}


int main() {

    string s;
    cin >> s;
    if ( isPanagram(s) ) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}
