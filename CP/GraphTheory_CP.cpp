#include <bits/stdc++.h>
using namespace std;

void dfs(int v, vector<bool>& vis, vector<int> g[]){
    vis[v]=true;
    cout<<v<<" ";
    for(int u:g[v]){
        if(!vis[u]) dfs(u,vis,g);
    }
}

int countCC(vector<int> g[], vector<bool> vis) //count conected components
{
    int c=0;
    for (int i = 1; i < vis.size(); i++)
    {
        if(!vis[i]){
            dfs(i,vis,g), ++c;
        }
    }
    return c;
}

void SSSP(vector<int> g[], vector<bool> &vis, vector<int> &dist, int s, int l=0) //Single Source Shortest Path(On Tree)
{ 
    vis[s]=true;
    dist[s]=l;
    for(int u:g[s]){
        if(!vis[u]) SSSP(g, vis, dist , u, dist[s]+1);
    }

}

int main()
{
    int N,M; // N = No. of Nodes , M = No. of Edges
    cin>>N>>M;
    //take graph input using Adj. list
    vector<int> g[N+1]; //undirected graph, not zero based indexing
    while(M--){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<bool> vis(N+1,false);
    vector<int> dist(N+1,0);
    SSSP(g,vis,dist,2,0);
    for(int i=1;i<=N;i++) cout<<dist[i]<<" ";
    //cout<<countCC(g,vis)<<endl;
    //dfs(1,vis,g);
}