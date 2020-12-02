#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;
#define int long long
#define loop(i, start, end) for (int i = start; i <= end; i++)
#define rloop(i, start, end) for (int i = start; i >= end; i--)
#define read(a,n) loop(i,0,n-1) cin>>a[i];
#define vi vector<int>
#define vec(x) vector<x>
#define sz(v) (int)v.size() 
#define UB upper_bound
#define LB lower_bound
#define all(v) (v).begin(),(v).end()
#define arl(v) (v).rbegin(),(v).rend()
#define fsp(a) fixed<<setprecision(a)
#define mem(a,with) memset(a, with, sizeof (a))
#define vmn(a) (*min_element(a.begin(),a.end()))   
#define vmx(a) (*max_element(a.begin(),a.end()))
#define bs(a,key) binary_search(all(a),key)    /// return bool.
#define rotl(a,x) rotate(a.begin(),a.begin()+x,a.end());
#define rotr(a,x) rotl(a,a.size()-x);
#define nl cout<<endl
#define dbg(x) cerr << #x << " :: " << x << endl;
#define dbg2(x, y) cerr << #x << " :: " << x << "\t" << #y << " :: " << y << endl;
#define MOD 1000000007
#define f first
#define s second
int add(int x, int y) {int res = x + y; return (res >= MOD ? res - MOD : res);}
int mul(int x, int y) {int res = x * y; return (res >= MOD ? res % MOD : res);}
int power(int x, int y) {int res = 1; x %= MOD; while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}

const int MAX=1e5+1;

vi adj[MAX]; // adj list
vi vis(MAX,0); // visited array
vi level; // height of each node
vi p; // parent array

// linear time
void findParent(int root){
	queue<pair<pair<int,int>,int>> q;
	q.push({{root,root},1}); // root is parent of itself

	while(!q.empty()){
		pair<pair<int,int>,int> node = q.front(); // child, parent
		q.pop();
		level[node.f.f]=node.s;
		p[node.f.f]=node.f.s;
		vis[node.f.f]=1;
		for(auto child:adj[node.f.f]){
			if(!vis[child]){
				q.push({{child,node.f.f},node.s+1});
			}
		}
	}
}

// multiple query 
int find(int x){
	return p[x];
}

// union by rank hueristics 
int Union(int x, int y){
	return 0;
}

void solve(){
    //code goes here
    int n; cin>>n; // n nodes
    p.resize(n+1,-1);
    level.resize(n+1,0);
    loop(i,1,n-1){ // n-1 edges
    	int x,y;
    	cin>>x>>y;
    	adj[x].push_back(y);
    	adj[y].push_back(x);
    }

    findParent(1);

    // loop(i,1,n){
    // 	cout<<p[i]<<" ";
    // }

    function<int(int,int)> LCA = [&](int a, int b)-> int{

    	if(level[a]>level[b]) swap(a,b);
    	int diff=level[b]-level[a];

    	while(diff>0){
    		b=p[b];
    		diff--;
    	}

    	if(a==b) return a;

    	while(a!=b){
    		a=p[a];
    		b=p[b];
    	}
    	return a;
    };

    cout<<LCA(2,7)<<" "<<LCA(3,4)<<" "<<LCA(7,8)<<" "<<LCA(1,6);
}

int32_t main()
{
auto start = chrono::high_resolution_clock::now();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false);
cout.tie(NULL);
cin.tie(NULL);
    int t=1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
#ifndef ONLINE_JUDGE
     auto stop = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<microseconds>(stop - start);
    cout<<"\n\nExecuted In: "<<duration.count()<<" ms";
#endif
    return 0;
}
