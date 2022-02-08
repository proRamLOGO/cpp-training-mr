#include<bits/stdc++.h>

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
// 3 4


void weightedGraph() {

    int n, e;
    cin >> n >> e;

    vector<vector<pair<int,int> > > adjList(n);

    for ( int i = 0 ; i < e ; i++ ) {
        int u, v, w;
        cin >> u >> v >> w;

        // Undirected Graph + UnWEIGHTED
        adjList[u].push_back(make_pair(v,w));
        adjList[v].push_back(make_pair(u,w));

        // Directed Graph + UnWEIGHTED
        // adjList[u].push_back({v,w});

    }

    cout << endl;

    for ( int i = 0 ; i < n ; i++ ) {
        cout << i << " : ";
        for ( pair<int,int> j:adjList[i] ) {
            cout << "(" << j.first << "," << j.second << "), ";
        }
        cout << endl;
    }


    cout << endl;

}

void dfs( vector < vector < int > > &adjList, int source, vector<bool> &vis ) {

    vis[source] = true;
    cout << source << ' ';

    for ( int neighbour: adjList[source] ) {
        if ( vis[neighbour] ) {
            continue;
        }
        dfs(adjList,neighbour,vis);
    }

}

void bfs(vector < vector < int > > &adjList) {

    int n = adjList.size();
    queue<int> q;
    vector<bool> vis(n);

    vis[1] = true;
    q.push(1);

    while ( !q.empty() ) {

        int vertex = q.front(); q.pop();
        cout << vertex << ' ';

        for ( int neighbour: adjList[vertex] ) {
            if ( !vis[neighbour] ) {
                vis[neighbour] = true;
                q.push(neighbour);
            }
        }

    }

}

int main() {

    // weightedGraph();
    // return 0;

    int n, e;
    cin >> n >> e;

    vector<vector<int> > adjList(n);
    // n size 2d vector of ints
    // each index has a 0 size 1D vector of ints

    for ( int i = 0 ; i < e ; i++ ) {
        int u, v;
        cin >> u >> v;
        

        // Undirected Graph + UnWEIGHTED
        // add v in u's list AND add u in v's list
        adjList[u].push_back(v);
        adjList[v].push_back(u);
        
        
        // Directed Graph + UnWEIGHTED
        // add v in u's list 
        // adjList[u].push_back(v); KEEP THIS
        // // adjList[v].push_back(u); REMOVE THIS
    }

    cout << endl;

    // for ( int i = 0 ; i < n ; i++ ) {
    //     cout << i << " : ";
    //     for ( int j:adjList[i] ) {
    //         cout << j << ", ";
    //     }
    //     cout << endl;
    // }

    // DFS
    vector<bool> vis(n);
    
    cout << "\nDFS is " ;
    dfs(adjList,0,vis);
    
    cout << "\nBFS is " ;
    bfs(adjList);


cout << endl;
}