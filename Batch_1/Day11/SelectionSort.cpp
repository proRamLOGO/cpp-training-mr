#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &v) {
    // Time: O(n*n)
    // Space: O(1)

    int n = v.size();
    for ( int i = 0 ; i < n-1 ; i++ ) {

        int minIdx = i;
        for ( int j = i+1 ; j < n ; j++) {
            if ( v[j] < v[minIdx] ) {
                minIdx = j;
            }
        }
        int temp = v[minIdx];
        v[minIdx] = v[i];
        v[i] = temp;
    }
}

void selectionSort(int v[], int n) {
    // Time: O(n*n)
    // Space: O(1)

    for ( int i = 0 ; i < n-1 ; i++ ) {

        int minIdx = i;
        for ( int j = i+1 ; j < n ; j++) {
            if ( v[j] < v[minIdx] ) {
                minIdx = j;
            }
        }
        int temp = v[minIdx];
        v[minIdx] = v[i];
        v[i] = temp;
    }
}

int main() {

    int n;
    cin >> n;
    // vector<int> v(n);
    int v[n];
    for ( int i = 0; i < n ; i++ ) cin >> v[i];
    // v = {5 7 6 2 4 3}
    
    // selectionSort(v); // Vector
    
    selectionSort(v,n); // Array
    // v = {2 3 4 5 6 7}
    for ( int i = 0; i < n ; i++ ) cout << v[i] << ' ';
    cout << endl;

}