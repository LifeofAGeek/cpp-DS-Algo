#include<bits/stdc++.h>
using namespace std;
#define int long long
#define loop(i, start, end) for (int i = start; i < end; i++)
#define rloop(i, start, end) for (int i = start; i >= end; i--)
int dr[]={-1,1,0,0};
int dc[]={0,0,1,-1};
vector<int> g[100001];
vector<vector<int>> matrix;
vector<vector<int>> vis;
int r,c,er,ec;

int helper(int x,int y,int cost=0){

	if(x==er-1 and y==ec-1){
		return cost;
	}

	if(x<0 or y<0 or x>=r or y>=c or matrix[x][y]==1 or vis[x][y]) return 0;

	if(!vis[x][y] and matrix[x][y]==0) {
		vis[x][y]=1;
		return min({helper(x+1,y,cost+1),helper(x,y+1,cost+1),helper(x,y-1,cost+1),helper(x-1,y,cost+1)});
	}
}

void solve(){
    //code goes here
    cin>>r>>c;
    cin>>er>>ec;
    matrix.resize(c,vector<int>(r));
    vis.resize(c,vector<int>(r,0));
    loop(i,0,r){
    	loop(j,0,c){
    		cin>>matrix[i][j];
    	}
    }

    loop(i,0,4){
    		int xx=
    }

    int ans=helper(0,0);
    cout<<ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t=1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}