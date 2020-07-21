//Author - Anubhav Sethi
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec(x) vector<x>
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int>>
#define umpii unordered_map<int,int>
#define mpii map<int,int>
#define matrix(x) vector<vector<x>>
#define all(v) v.begin(),v.end()
#define mem(a,b) memset(a, b, sizeof a)
#define setBits(n) __builtin_popcountll(n)
#define prec(n) fixed<<setprecision(n)
#define ff first
#define ss second
#define for(i,start,end) for(int i=start;i<end;i++)
#define in(x) cin>>x;
#define print(x) cout<<x<<" ";
#define printArr(x) for(auto it:x) cout<<it<<" ";
#define dbg(x) cerr<<#x<<" :: "<<x<<endl;
#define dbg2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<endl;
const int INF = 1e9;
const int MOD = 1e9 + 7; 
const double pi = acos(-1);
int power(int a,int b,int m=MOD)
{int ans=1;while(b>0){if(b&1)ans=((ans%m)*(a%m))%m;
a=((a%m)*(a%m))%m;b>>=1;}return ans;}
int dir[]={-1, 0, 1, 0, -1};
int dx[]={1,1,0,-1,-1,-1, 0, 1};
int dy[]={0,1,1, 1, 0,-1,-1,-1};

//-------------------------------------------------------------------------------------------------//

void solve()
{
	//code goes here

}

int32_t main()
{
	FASTIO;
	int t;
	t=1;
	//cin>>t;
	while(t--)
		solve();
}
