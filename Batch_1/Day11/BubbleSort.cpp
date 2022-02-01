#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    // DECLARATION of VECTOR
    // vector< int > v; // {}
    // vector< int > v(10); // {0,0,0,0,0,0,0,0,0,0}
    // vector< int > v(10,1); // {1,1,1,1,1,1,1,1,1,1}

    // v.push_back(10)
    
    vector<int> v(n);
    for ( int i = 0; i < n ; i++ ) cin >> v[i];

    // Time : O(n*n)
    // Space: O(1)
    for ( int i = 0 ; i < n ; i++ ) {

        for( int j = 0 ; j < n-1 ; j++ ) {
            if ( v[j]>v[j+1] ) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
        
    }


    for ( int i = 0; i < n ; i++ ) cout << v[i] << ' ';
    cout << endl;


}