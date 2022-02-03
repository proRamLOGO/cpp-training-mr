#include<iostream>
#include<vector>

using namespace std;

int fib(int n, vector<int> &dp) {

    if ( dp[n]!=-1 ) {
        // case when ans has been found already
        return dp[n];
    }

    if (n<2)
        // return dp[n] = n;
        return n;
    
    return dp[n] = fib(n-1,dp)+fib(n-2,dp);

}


int main() {

    int n;
    cin >> n;

    vector<int> dp(n+1,-1);

    // for ( int i = 0 ; i <= n ; i++)
    //     cout << fib(i,dp) << endl;

    fib(n,dp);

    for ( int i:dp )
        cout << i << endl;

}
