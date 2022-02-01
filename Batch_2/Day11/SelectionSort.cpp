#include <iostream>
#include <vector>

using namespace std;

// void bubbleSort(int *arr, int n) {
void selectionSort(vector<int> &v) {

    int n = v.size();

    for ( int i = 0 ; i < n-1 ; i++ ) {

        int minIdx = i;
        for ( int j = i+1 ; j<n ; j++ ) {
            if ( v[minIdx] > v[j] ) {
                minIdx = j;
            }
        }

        int temp = v[i];
        v[i] = v[minIdx];
        v[minIdx] = temp;

    }

}


int main() {

    int n;
    cin >> n;
    
    // vector<int> v;
    // for ( int i = 0 ; i < n ; i++ ) {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    
    // int arr[n];
    vector<int> v(n);
    for ( int i = 0 ; i < n ; i++ ) cin >> v[i];


    // arr is original
    // for ( int i = 0 ; i < n ; i++ ) cout << arr[i] << ' ';

    selectionSort(v);

    // arr to be sorted
    for ( int i = 0 ; i < n ; i++ ) cout << v[i] << ' ';
    cout << endl;

}