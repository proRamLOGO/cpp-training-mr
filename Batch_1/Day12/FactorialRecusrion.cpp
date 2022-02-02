#include<iostream>
#include<vector>

using namespace std;

int factorial(int num) {

    // Time: O(n)
    // Space: O(n)

    if ( num>0 )
        return num * factorial(num-1);
    return 1;
}

int main() {

    int n;
    cin >> n ;
    for ( int i = 0 ; i <= n ; i++ )
        cout << i << "! = " << factorial(i) << endl;
    
}
