#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class graph{

public : 

    unordered_map<int, list<int>> adj;

    void addEdege(int u, int v, bool direction){
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        // create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i : adj){
            cout << i.first << " -> ";
            for(auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }

};

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin >> u >> v;
        // Creating an undirected graph
        g.addEdege(u,v,0);
    }

    // Printing the graph
    g.printAdjList();

    return 0;
}