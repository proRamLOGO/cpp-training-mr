#include <iostream>

using namespace std;

int main() {

    // SYNTAX FOR ARRAYS
    // DTP name[ size ];

    // Q. Given a number n, input n numbers and print the n numbers.

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