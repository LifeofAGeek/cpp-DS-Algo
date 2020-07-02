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

void SSSP(vector<int> g[], vector<bool> vis){ //Single Source Shortest Path(On Tree)
    vector<int> dist(vis.size(),0); 
    
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
    
    //cout<<countCC(g,vis)<<endl;
    dfs(1,vis,g);
}