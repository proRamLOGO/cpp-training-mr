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

    
}