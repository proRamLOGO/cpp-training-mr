// Q. Given a string tell if that string is panagram or not, Print a YES or NO.

// "qwertyuiopasdfghjklzxcvbnm" = 
// "thqequickbrownfoxjumpsoverlazydog" = o
// "proRamm" = m;
// "shubh" = h;
// "instrumentisamusicalinstrumentinwhichthestringisofsuchalengththatthefundamentaltransversewaveisbelowwhatapersoncanhear" = 

// string s;
// char s[n];

#include<iostream>
using namespace std;

int getIdx(char ch) {
    return (int)ch - 97;
}

char findMaxOccChar_avinash(string s) {

    // Time: n*n
    // Space : 1

    int ansf = 1;
    char ansch = s[0];

    int counter = 0;

    // n*n
    for ( int i = 0 ; i < s.length() ; i++ ) { // n times
        int freq = 0;
        for ( int j = 0 ; j < s.length() ; j++ ) { // n times
            counter++;
            if ( s[j]==s[i] )
                freq++;
        }
        if ( freq > ansf ) {
            ansf = freq;
            ansch = s[i];
        }
    }

    cout << "Avinash takes " << counter << " operations." << endl;

    return ansch;

}

char findMaxOccChar_shubh(string s) {

    int ansf = 1;
    char ansch = s[0];

    int counter = 0;

    // time: n
    // space: 1
    for ( char ch = 'a' ; ch <= 'z' ; ch++ ) { // 26 times
        int freq = 0;
        for ( int j = 0 ; j < s.length() ; j++ ) { // n times
            counter++;
            if ( s[j]==ch )
                freq++;
        }
        if ( freq > ansf ) {
            ansf = freq;
            ansch = ch;
        }
    }

    cout << "Shubh takes " << counter << " operations." << endl;

    return ansch;

}


char findMaxOccChar_proRam(string s) {


    // time: n
    // space: 1

    int freq[26], counter = 0;

    for ( char ch: s) {
        counter++;
        freq[getIdx(ch)]++;
    }

    int ansIdx = 0;

    for ( int i = 1 ; i < 26 ; i++ ) {
        counter++;
        if ( freq[ansIdx] < freq[i] ) {
            ansIdx = i;
        }
    }    

    cout << "proRam takes " << counter << " operations. And yes, the ans is:   ";

    return ansIdx + 'a';
            // 0  + 'a' = 'a'
            // 1  + 'a' = 'b'
            // 25 + 'a' = 'z'

}

int main() {

    string s;
    cin >> s;
    cout << "Length of s is " << s.length() << endl << endl;
    cout << findMaxOccChar_avinash(s) << endl << endl;
    cout << findMaxOccChar_shubh(s) << endl<< endl;
    cout << findMaxOccChar_proRam(s) << endl<< endl;

}
