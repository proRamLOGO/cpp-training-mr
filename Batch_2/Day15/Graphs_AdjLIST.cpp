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

    vector<vector<int> > adjList(n);

    for ( int i = 0 ; i < e ; i++ ) {

        int u,v;
        cin >> u >> v;

        // Undirected Unweighted Graph
        adjList[u].push_back(v);
        adjList[v].push_back(u);

        // DIRECTED Unweighted Graph
        // adjList[u].push_back(v);    // KEEP
        // // adjList[v].push_back(u); // REMOVE

    }
cout << endl << endl;

    // PRINTING GRAPH ADJ MATRIX
    for ( int i = 0; i < n; i++ ) {
        cout << i << " -> ";
        for ( int neighbour: adjList[i]) {
            cout << neighbour << ", ";
        }
        cout << endl;
    }

cout << endl << endl;
}