#include <bits/stdc++.h>
using namespace std;

vector<int> g[1001]; //undirected graph, not zero based indexing
vector<bool> vis(1001,false); //to keep track of visited nodes
vector<int> dist(1001,0); //distance array of every node from source node
int N,M; // N = No. of Nodes , M = No. of Edges

template <class T>
void print(vector<T> arr) //print array of T type
{
    for(int i=1;i<=N;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void clear(){
   for(int i=1;i<=N;i++) vis[i]=false;
   for(int i=1;i<=N;i++) dist[i]=0;
}

void dfs(int v){
    vis[v]=true;
    cout<<v<<" ";
    for(int u:g[v]){
        if(!vis[u]) dfs(u);
    }
}

int countCC(int N) //count conected components
{
    int c=0;
    for (int i = 1; i <= N; i++)
    {
        if(!vis[i]){
            dfs(i), ++c;
        }
    }
    return c;
}

void SSSP(int s, int l=0) //Single Source Shortest Path(On Tree)
{ 
    vis[s]=true;
    dist[s]=l;
    for(int u:g[s]){
        if(!vis[u]) SSSP(u, dist[s]+1);
    }
}

int main()
{
    cin>>N>>M;
    //take graph input using Adj. list
    while(M--){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    
    // SSSP(1,0);
    // print(dist);
    // cout<<endl;
    // cout<<"No. of Connected components are "<<countCC(N)<<endl;
    // clear();
    // dfs(1);
}