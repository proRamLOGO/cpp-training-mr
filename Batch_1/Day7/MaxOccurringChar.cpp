#include <iostream>
using namespace std;

// q. given a string find maximum times occuring char.

// "qwertyuiopasdfghjklzxcvbnm"
// "asdfgvbj"
// "qwerty"
// "shubh"
// "proRam"


// string s;
// char s[n];

int getIdx(char c) {
    return c-'a';
}
char getChar(int idx) {
    return idx+97;
}

// n, last idx = n-1
char findMaxOccChar(string s) {

    int freq[26];

    for ( char i:s ) {
        cout << i << ' ';
        freq[i-'a']++;
    }
    cout << endl;
    // freq table has been created.


    int ansIdx = 0; // stores position/index of max occ char
    for ( int i = 0 ; i < 26 ; i++ ) {
        if ( freq[ansIdx] < freq[i] ) {
            ansIdx = i;
        }
    }
    // idx relative to max occ char obtained

    // char ans = getChar(ansIdx);
    // return ans;
    
    return getChar(ansIdx);

}

int main() {

    string s;
    cin >> s;
    cout << findMaxOccChar(s) << endl << endl;

}


