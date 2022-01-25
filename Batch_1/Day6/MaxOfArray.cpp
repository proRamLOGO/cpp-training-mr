#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for ( int i = 0; i < n; i++ ) {
        cin >> arr[i] ;
    }

    int ans = arr[0];

    for ( int i = 1 ; i < n ; i++ ) {
        if ( arr[i] > ans ) {
            ans = arr[i];
        }
    }

    // for ( int i = 0 ; i < n ; i++ ) {
    //     if ( arr[i] > ans )
    //         ans = arr[i];
    // }

    // for ( int i = 0 ; i < n ; i++ ) 
    //     if ( arr[i] > ans )
    //         ans = arr[i];
    
    // if ( n<8 )
    //     if ( n>5 )
    //         cout << "OK";
    //     else 
    //         cout << "ERROR";

    // // -------------------------------    

    // if ( n<8 ) {
    //     if ( n>5 ) {
    //         cout << "OK";
    //     }
    //     else {
    //         cout << "ERROR";
    //     }
    // }

    // // -------------------------------    

    // if ( n<8 ) {
    //     if ( n>5 ) {
    //         cout << "OK";
    //     }
    // }
    // else {
    //     cout << "ERROR";
    // }

    cout << ans << endl << endl;


}