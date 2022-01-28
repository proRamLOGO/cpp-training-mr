#include <iostream>
using namespace std;

int main() {

    // SYNTAX 
    // DTP NAME[SIZE]

    int n;
    cin >> n;
    int arr[n];
    

    for ( int i = 0 ; i < n ; i++ ) {
        cin >> arr[i];
    }

    // int i;
    // for ( i = 0 ; i < n ; i++ ) {
    //     cin >> arr[i];
    // }
    

    // for ( int i = 1 ; i < n ; i++) {
    //     if ( arr[0] < arr[i] )
    //         arr[0] = arr[i];
    // }

    // cout << arr[0] << endl << endl;

    // -------

    int ans = arr[0];

    for ( int i = 0 ; i < n ; i++) {
        if ( ans < arr[i] ) {
            ans = arr[i];
        }
    }

    cout << ans << endl << endl;

    
    cout << endl << endl;

    // n = 3
    // arr = -1, -2, -5
    
    
    // ans = 0 
    // i = 0 -> 1 -> 2 -> 3


    // if (ans<3)
    //     if (ans<2 )
    //         cout << "CLIK";
    //     else 
    //         cout << "HACK";


    // if (ans<3) {
    //     if (ans<2 ){
    //         cout << "CLIK";
    //     } else {
    //         cout << "HACK";
    //     }
    // }

    // if (ans<3){
    //     if (ans<2 ){
    //         cout << "CLIK";
    //     }
    // } else {
    //     cout << "HACK";
    // }



}