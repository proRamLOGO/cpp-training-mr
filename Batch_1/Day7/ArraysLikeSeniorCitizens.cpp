#include <iostream>
using namespace std;

int main() {

    // int arr[100000];

    int n;
    cin >> n;

    int *arr; //step 1 of int arr[n]. create a pointer arr
    
    arr = (int*)malloc(n * sizeof(int));  //step 2 of int arr[n], reserve blocks

    for ( int i = 0 ; i < n ; ++i ) {
        cin >> arr[i] ;
        cout << i << "  :  " << (arr+i) <<"  :  " << &(arr[i]) << endl;
        // cin >> *(arr+i);
    }
    for ( int i = 0 ; i < n ; ++i )
        cout << arr[i] << ' ' ;

    cout << "--------------------------------" << endl << endl;

    int *list; //step 1 of int arr[n]. create a pointer arr
    
    list = (int*)calloc(n , sizeof(int));  //step 2 of int arr[n], reserve blocks

    for ( int i = 0 ; i < n ; ++i ) {
        cin >> *(list+i);
    }
    for ( int i = 0 ; i < n ; ++i )
        cout << list[i] << ' ' ;

    cout << "--------------------------------" << endl << endl;

}
