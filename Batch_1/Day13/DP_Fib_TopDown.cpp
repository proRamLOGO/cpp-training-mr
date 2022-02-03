#include<iostream>
#include<vector>

using namespace std;

int fib(int n, vector<int> &dp) {

    // Time: O(2^n) From this to -> O(n) 
    // Space: O(n)
    
    // counter++;
    if ( n<=1 )
        return n;
    
    if ( dp[n]!=-1 ) {
        return dp[n];
    }
    
    return dp[n] = fib(n-1, dp) + fib(n-2, dp);

}

int main() {

    int n;
    cin >> n;
    vector<int> dp(n+1,-1); // MEMOIZATION TABLE
    // n+1 size to store/access fib(n) at nth index.
    cout << fib(n,dp) << endl;

}
