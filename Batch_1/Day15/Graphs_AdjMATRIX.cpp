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
// 0 2
// 2 3
// 2 4
// 1 4

void weightedGraph() {

    int n, e;
    cin >> n >> e;

    // Non_Negative Num will mean we can travel from i->j 
    // with that particular cost
    vector<vector<int> > adjMat(n, vector<int>(n,-1));

    for ( int i = 0 ; i < e ; i++ ) {
        int u, v, w;
        cin >> u >> v >> w;

        // Undirected Graph + WEIGHTED
        adjMat[u][v] = adjMat[v][u] = w;

        // Directed Graph + WEIGHTED
        // adjMat[u][v] = w;

    }

    cout << endl;

    for ( vector<int> i:adjMat ) {
        for ( int j:i ) {
            cout << j << ' ';
        }
        cout << endl;
    }

    cout << endl;
}


int main() {

    int n, e;
    cin >> n >> e;

    vector<vector<bool> > adjMat(n, vector<bool>(n,false));

    for ( int i = 0 ; i < e ; i++ ) {
        int u, v;
        cin >> u >> v;

        // Undirected Graph + UnWEIGHTED
        adjMat[u][v] = adjMat[v][u] = true;

        // Directed Graph + UnWEIGHTED
        // adjMat[u][v] = true;

    }

    cout << endl;

    for ( vector<bool> i:adjMat ) {
        for ( bool j:i ) {
            cout << j << ' ';
        }
        cout << endl;
    }

    cout << endl;



}