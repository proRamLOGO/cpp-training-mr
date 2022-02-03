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
    // TIME: O(n) 
    // SPACE: O(1)


    int freq[26] = {0} ; // INIT ARRAY WITH 0 METHOD

    // INIT ARRAY WITH ANY VALUE MENTHOD
    // for ( int i = 0 ; i < 26 ; i++)
    //     freq[i] = 0;

    for ( int i = 0 ; i < 26 ; i++)
        cout <<freq[i]<<' ';
    
    // for ( int i=0 ; i<s.length() ; i++ ) {
    //     // cout << i << ' ';
    //     freq[s[i]-'a']++;
    // }
    // cout << endl;
    // freq table has been created.

    for ( char i:s ) {
        cout << i << ' ';
        freq[i-'a']++;
    }
    cout << endl;
    // freq table has been created.

    int ansIdx = 0; // stores position/index of max occ char
    for ( int i = 0 ; i < 26 ; i++ ) {
        // cout << (char)(i+97) << "  :  " << freq[i] << endl;
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


