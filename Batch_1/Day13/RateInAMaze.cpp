#include<iostream>
#include<vector>

using namespace std;

bool rateInAMaze(vector< vector<bool> > &grid, int i, int j, int n) {

    // Time: O(2^n)
    // Space: O(n)

    // BASE CASES START
    if ( i==n-1 && j==n-1 ){
        // ans is we can reach the end
        return true;
    }

    if ( i>=n || j>=n ) {
        // OUT OF GRID
        // BACKTRACK;
        return false;
    }
    if ( grid[i][j] == 0 ) {
        // BLOCKED CELL
        // BACKTRACK
        return false;
    }
    // BASE CASES END

    // ----------------------------------------------------------------

    // RECURSIVE CASE STARTS

    // go right
    bool res = rateInAMaze(grid,i,j+1,n);

    if ( res == true ) {
        // FOUND ANS VIA RIGHT
        return true;
    }

    // got down
    return rateInAMaze(grid,i+1,j,n);
    // RECURSIVE CASE ENDS

}



bool rateInAMaze_COMPACT(vector< vector<bool> > &grid, int i, int j, int n) {

    // BASE CASES START
    if ( i==n-1 && j==n-1 ){
        // ans is we can reach the end
        return true;
    } else if ( i>=n || j>=n    ||    grid[i][j] == 0 ) {
        //       OUT OF GRID  --OR--     BLOCKED CELL
        // BACKTRACK;
        return false;
    }

    if ( rateInAMaze(grid,i,j+1,n) ) // go right
        return true; // FOUND ANS VIA RIGHT
    
    return rateInAMaze(grid,i+1,j,n); // go down

}


void rateInAMaze_bool(vector< vector<bool> > &grid, int i, int j, int n, bool &res) {

    // cout << i << ',' << j << endl;

    // BASE CASES START
    if ( i==n-1 && j==n-1 ){
        // ans is we can reach the end
        res = true;
        return;
    } else if ( i>=n || j>=n    ||    grid[i][j] == 0 ) {
        //       OUT OF GRID  --OR--     BLOCKED CELL
        // BACKTRACK;
        return;
    }

    rateInAMaze_bool(grid,i,j+1,n,res); // go right
    if ( res ) {
        cout << i << "," << j+1 << endl;
        return;
    }
    rateInAMaze_bool(grid,i+1,j,n,res); // go down
    if ( res ) {
        cout << i+1 << "," << j << endl;
    }
    return;

}

int main() {

    int n;
    cin >> n;
    bool res = false;
    // int grid[n][n];
    vector< vector<bool> > grid(n, vector<bool>(n));
    
    for ( int i = 0 ; i < n ; i++ )
        for ( int j = 0 ; j < n ; j++ ) {
            bool res;
            cin >> res;
            grid[i][j] = res;
        }
            

   
    if ( rateInAMaze(grid, 0,0 ,n) ) {
        cout << "RAT REACHED END\n";
    } else {
        cout << "RAT IS STUCK!!\n";
    }


    if ( rateInAMaze_COMPACT(grid, 0,0 ,n) ) {
        cout << "RAT REACHED END\n";
    } else {
        cout << "RAT IS STUCK!!\n";
    }

    cout << endl << endl;

    rateInAMaze_bool(grid,0,0,n,res);
    

}

