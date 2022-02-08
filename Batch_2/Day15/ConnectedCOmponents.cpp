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

void dfs( vector<vector<int> > &adjList, int source, vector<bool> &vis ) {

    vis[source] = true;
    // cout << source << ' ';

    for ( int neighbour: adjList[source] ) {
        if ( !vis[neighbour] ) {
            dfs(adjList, neighbour, vis);
        }
    }

}

int main() {

    int n,e;
    cin >> n >> e;

    vector<vector<int> > adjList(n);

    for ( int i = 0 ; i < e ; i++ ) {

        int u,v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);

    }

    vector<bool> vis(n);
    int count = 0;
    
    for ( int i = 0 ;i < n ; i++) {
        if ( !vis[i] ) {
            dfs(adjList,i,vis);
            count++;
        }
    }
    
    cout << count << endl;
}