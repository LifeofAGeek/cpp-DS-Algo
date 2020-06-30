#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
}

void dfs(int v, vector<bool> &vis, vector<int> adj[])
{
    vis[v] = true;
    cout<<v<<" ";
    for (int u : adj[v])
    {
        if (!vis[u]){
            dfs(u,vis,adj);
        }
    }
}

int main()
{
    int n; // no. of vertex
    cin>>n;
    vector<int> adj[n]; // graph represented as an adjacency list
    vector<bool> vis(n,false);
    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 4); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 1, 3); 
    addEdge(adj, 1, 4); 
    addEdge(adj, 2, 3); 
    addEdge(adj, 3, 4);
    dfs(3,vis,adj);
    cout << endl;
}