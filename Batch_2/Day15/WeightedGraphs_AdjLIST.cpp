#include<iostream>
#include<vector>
using namespace std;
// Q. Given an undirected unweighted graph with n number of nodes and e edges, kindly store it. 

// Input Format 
// You are given 2 numbers n and e in the first line.
// Next e lines will contain 3 numbers, denoting an edge from ith node to jth node and their weight.

// Testcase 0
// Input
// 5 5
// 1 2 5
// 2 3 10
// 2 4 14
// 3 4 28
// 4 0 11

int main() {

    int n,e;
    cin >> n >> e;

    vector<vector< pair<int,int> > > adjList(n);

    for ( int i = 0 ; i < e ; i++ ) {

        int u,v,w;
        cin >> u >> v >> w;

        // Undirected weighted Graph
        adjList[u].push_back(make_pair(v,w));
        adjList[v].push_back(make_pair(u,w));

        // DIRECTED weighted Graph
        // adjList[u].push_back(make_pair(v,w));    // KEEP
        // // aadjList[v].push_back(make_pair(u,w)); // REMOVE

    }
cout << endl << endl;

    // PRINTING GRAPH ADJ MATRIX
    for ( int i = 0; i < n; i++ ) {
        cout << i << " -> ";
        for ( pair<int,int> neighbour: adjList[i]) {
            cout << '('<< neighbour.first << ',' << neighbour.second << "), ";
        }
        cout << endl;
    }

cout << endl << endl;
}

