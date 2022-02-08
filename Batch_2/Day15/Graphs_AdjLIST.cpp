#include<iostream>
#include<vector>
#include<queue>
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
    cout << source << ' ';

    for ( int neighbour: adjList[source] ) {
        if ( !vis[neighbour] ) {
            dfs(adjList, neighbour, vis);
        }
    }

}

void bfs( vector<vector<int> > &adjList) {

    int n = adjList.size();
    vector<bool> vis(n);
    queue<int> q;

    q.push(3);
    vis[3] = true;

    while ( !q.empty() ) {

        int vertex = q.front(); q.pop();

        cout << vertex << ' ';

        for ( int neighbour : adjList[vertex] ) {
            if ( !vis[neighbour] ) {
                vis[neighbour] = true;
                q.push(neighbour);
            }
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

    cout << "DFS is :   ";

    vector<bool> vis(n);
    dfs(adjList,4,vis);


cout << endl << endl;

    cout << "BFS is :   ";

    bfs(adjList);


cout << endl << endl;
}