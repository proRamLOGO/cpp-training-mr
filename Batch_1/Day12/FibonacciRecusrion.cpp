#include<iostream>
#include<vector>

using namespace std;

int fib(int n, int &counter) {

    // Time: O(2^n)
    // Space: O(n)
    counter++;
    if ( n<=1 )
        return n;
    return fib(n-1, counter) + fib(n-2, counter);
}

int main() {

    int n, counter=0;
    cin >> n ;
    cout << n << " : " << fib(n,counter) << ", calculated in " << counter << " seconds\n";
    // for ( int i = 0 ; i <= n ; i++ )
    //     cout << i << " : " << fib(i) << endl;
    
}
