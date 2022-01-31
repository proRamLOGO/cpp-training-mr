#include<iostream>
#include<queue>

using namespace std;

int main() {
    cout << endl << endl;
    string s;
    cin >> s;

    int freq[26];
    queue<char> q;

    for ( char ch:s ) {

        freq[ch-'a']++;

        while( !q.empty() && freq[q.front()-'a']>1 )
            q.pop();
        
        if ( freq[ch-'a']==1 ) 
            q.push(ch);

        if ( q.empty() )
            cout << '#';
        else 
            cout << q.front();

    }

    cout << endl << endl;
    cout << endl;

}


 
