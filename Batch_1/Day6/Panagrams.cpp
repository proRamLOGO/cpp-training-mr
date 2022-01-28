#include <iostream>
using namespace std;

// q. given a string find if its a panagram

// "qwertyuiopasdfghjklzxcvbnm"
// "asdfgvbj"
// "qwerty"
// "shubh"
// "proRam"

// a
// b
// c
// d

// bool isPanagram(string s) {

//     bool  isA = false,
//         isB = false,
//         isC = false,
//         isD = false, 
//         isE = false,
//         // ....
//         isY = false,
//         isZ = false;


//     for ( int i = 0 ; i < s.length() ; i++ ) {
//         if ( s[i] == 'a' ) {
//             isA = true;
//         }
//         else if ( s[i] == 'b' ) {
//             isB = true;
//         }
//         // ...
//         // ...
//         else if ( s[i]=='y' ) {
//             ifY = true
//         } else if ( s[i] =='z') {
//             ifZ = true
//         } 
//     }

//     if ( isA && isB && isC .... isY && isZ ) {
//         return true;
//     } else {
//         return false;
//     }

//     return true;
// }

// int getIdx(char c) {

//     if ( c=='a' ) return 0;
//     else if ( c=='b' ) return 1;
//     else if ( c=='c' ) return 2;
//     else if ( c=='d' ) return 3;
//     // ...
//     else if ( c=='z' ) return 25;

// }

int getIdx(char c) {

    return c-'a';

}
// n, last idx = n-1

bool isPanagram(string s) {

    bool isChar[26];

    // for ( int i = 0 ; i <= s.length()-1 ; i++ ) {
    for ( int i = 0 ; i < s.length() ; i++ ) {
        char c = s[i];
        int idx = getIdx(c);
        isChar[idx] = true;
    }

    for ( int i = 0 ; i < 26 ; i++ ) {
        if ( !isChar[i] ) {
            return false;
        }
    }    


    for ( char c = 'a' ; c != 'z' ; c++ ) {
        if ( !isChar[getIdx(c)] ) {
        // if ( !isChar[getIdx('a')] ) {
        // if ( !isChar[0] ) {
        // if ( !false ) {
        // if ( true ) {
            return false;
        }
    }    

    return true;
}

int main() {

    string s;
    cin >> s;
    for ( int i = 0 ; i < s.length() ; i++ ) {
        cout << s[i] << ' ';
    }
   
    cout << endl;
    cout << endl;

    char x;
    cin >> x;
    cout << x << ' ' << (int)x << endl;

    cout << endl;


    if (isPanagram(s)) {
        cout << "YES";
    } else {
        cout << "NO" ;
    }
    
    cout << endl << endl;

}


