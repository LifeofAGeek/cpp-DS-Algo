#include <bits/stdc++.h>
#define int long long int
using namespace std;
#define mod 998244353
int g[105][105]; //Adj. matrix
int n,m;
void dfs(int start, vector<bool> &vis, int &v, int &e){
    vis[start]=true;
    v++; //count vertex
    for(int i=1;i<=n;i++){
        if(g[start][i]){
            e++; //count edges
            if(!vis[i]){
                dfs(i,vis,v,e);
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    while (m--)
    {      
        int v,u; //undirected graph
        cin>>v>>u;
        g[v][u]=1;
        g[u][v]=1;
    }

    vector<bool> vis(n+1,false);
    int cc=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int vrtx=0, edge=0;
            dfs(i,vis,vrtx,edge);
            if((vrtx&1) and (edge/2==vrtx)) {
                cc++; //connected component with odd cycle
            }
        }
    }
    cout<<cc<<endl;
    //cout << clock() / double(CLOCKS_PER_SEC) << endl;
}
