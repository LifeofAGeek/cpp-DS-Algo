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
    int n,E; // no. of vertex and edges
    cin>>n>>E;
    vector<int> adj[n]; // graph represented as an adjacency list
    vector<bool> vis(n,false);
    for(int i=0; i<E;i++){
        int u,v;
        cin>>u>>v; //u--; v--;
        addEdge(adj, u, v); 
    }

    dfs(3,vis,adj);
    cout << endl;
}