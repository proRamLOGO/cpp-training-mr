#include<iostream>
#include<vector>

using namespace std;

bool ratInAMaze(vector< vector<int> > &grid, int i, int j, int n) {

    // Time: O(2^n)
    // Space:(n)

    // BASE CASE STARTS

    if (i==n-1 && j==n-1) {
        // OK! PATH FOUND!
        return true;
    }

    if (   i>=n || j>=n   ||     grid[i][j]==0 ) {
        // OUT OF GRID  --OR--   BLOCKED CELL
        // BACTRACK
        return false;
    }

    // if ( i>=n || j>=n ) {
    //     // OUT OF GRID
    //     // BACKTRACK
    //     return false;
    // }

    // if ( grid[i][j]==0 ) {
    //     // BLOCKED CELL
    //     // BACTRACK
    //     return false;
    // }

    // BASE CASE ENDS

    // ----------------------------------------------------------------

    // RECURSIVE CASE STARTS

    // bool res = ratInAMaze(grid,i,j+1,n); // go to right

    // if ( res==true ) {
    //     // FOUND A PATH;
    //     return true;
    // }

    if (ratInAMaze(grid,i,j+1,n)) { // go to right
        // FOUND A PATH;
        return true;
    }

    return ratInAMaze(grid,i+1,j,n); // go to down

    // RECURSIVE CASE ENDS

}

int main() {

    int n;
    cin >> n;
    vector< vector<int> > grid(n, vector<int>(n) );

    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < n; j++ ) {
            cin >> grid[i][j];
        }
    }

    if (ratInAMaze(grid,0,0,n))
        cout << "YES\n";
    else
        cout << "NO\n";



}
