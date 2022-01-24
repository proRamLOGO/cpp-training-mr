#include <iostream>

using namespace std;

int main() {

    // SYNTAX FOR ARRAYS
    // DTP name[ size ];

    // Q. Given an array and a number k, find if 2 numbers have sum equal to k.

    int n,k;
    cin >> n >> k;
    int arr[n];

    for ( int i = 0; i < n ; ++i ) {
        cin >> arr[i];
    }

    for ( int i = 0; i < n ; i++ ) {
        cout << arr[i] << ' ';
    }

    bool sumfound = false;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = i+1 ; j<n ; ++j ) {
            if ( arr[i]+arr[j] == k) {
                sumfound = true;
                cout << arr[i] << '+' << arr[j] << '=' << k << endl;
                break;
            }
        }
        if ( sumfound) {
            break;
        }
    }

    if ( !sumfound ) {
        cout << "NO NUMS" << endl;
    }

}