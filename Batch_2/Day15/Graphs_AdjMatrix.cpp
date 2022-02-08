#include<iostream>
#include<vector>
using namespace std;
// Q. Given an undirected unweighted graph with n number of nodes and e edges, kindly store it. 

// Input Format 
// You are given 2 numbers n and e in the first line.
// Next e lines will contain 2 numbers, denoting an edge from ith node to jth node.

// Testcase 0
// Input
// 5 5
// 1 2
// 2 3
// 2 4
// 3 4
// 4 0

int main() {

    int n,e;
    cin >> n >> e;

    vector<vector<bool> > adjMat(n, vector<bool>(n));

    for ( int i = 0 ; i < e ; i++ ) {

        int u,v;
        cin >> u >> v;

        // Undirected Unweighted Graph
        adjMat[u][v] = true;
        adjMat[v][u] = true;

        // DIRECTED Unweighted Graph
        // adjMat[u][v] = true;    // KEEP
        // // adjMat[v][u] = true; // REMOVE

    }
cout << endl << endl;

    // PRINTING GRAPH ADJ MATRIX
    for ( vector<bool> i:adjMat ) {
        for ( bool j:i ) {
            cout << j << ' '; 
        }
        cout << endl;
    }

cout << endl << endl;
}