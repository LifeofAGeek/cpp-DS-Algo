/* 
    Author - Anubhav Sethi
    IN THE NAME OF GOD
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec(x) vector<x>
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define pb push_back
#define pii pair<int, int>
#define vi vector<int>
#define sz(x) (int)(x).size()
#define vii vector<pair<int, int>>
#define umpii unordered_map<int, int>
#define mpii map<int, int>
#define matrix(x) vector<vector<x>>
#define all(v) v.begin(), v.end()
#define mem(a, b) memset(a, b, sizeof(a))
#define setBits(n) __builtin_pinitcountint(n)
#define prec(n) fixed << setprecision(n)
#define ff first
#define ss second
#define loop(i, start, end) for (int i = start; i < end; i++)
#define rloop(i, start, end) for (int i = start; i >= end; i--)
#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define printArr(x)   \
    for (auto it : x) \
        cout << it << " ";
#define nl cout << endl
#define dbg(x) cerr << #x << " :: " << x << endl;
#define dbg2(x, y) cerr << #x << " :: " << x << "\t" << #y << " :: " << y << endl;
const int INF = 1e9;
const int mod = 1e9 + 7;
const double pi = acos(-1);
#define EPSILON numeric_limits<double>::epsilon() 
vi init(string s)
{
	istringstream sin(s);
	int n;
	vi arr;
	while(sin>>n)arr.push_back(n);
	return arr;
}
int power(int x, int y)
{ 
	if(y==0)return 1;
	int u=power(x,y/2);
	u=(u*u)%mod;
	if(y%2)u=(x*u)%mod;
	return u;
}
int gcd(int a,int b)
{
	if(a<b)return gcd(b,a);
	return (b==0?a:(a%b?gcd(b,a%b):b));
}
int gcd_e(int a,int b,int &x,int &y)
{
	if(b==0){x=1; y=0; return a;}
	int x1,y1;
	int p=gcd_e(b,a%b,x1,y1);
	x=y1;
	y=x1-(a/b)*y1;
	return p;
}
int inv(int x)
{
	return power(x%mod,mod-2);
}
int ncr(int n,int r)
{
	if(n<r)return 0;
	if(n==r||r==0)return 1;
	int numerator=1;
	int denominator=1;
	loop(i,1,r+1)denominator=(denominator*i)%mod;
	loop(i,0,r)numerator=(numerator*((n-i)%mod))%mod;
	return (numerator*inv(denominator))%mod;
}

int dir[] = {-1, 0, 1, 0, -1};
int dx[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int dy[8] = {1, -1, 0, 0, 1, 1, -1, -1};

//-------------------------------------------------------------------------------------------------//

//global variables

void solve()
{
    
}
int32_t main()
{
    FASTIO;
    int t=1;
    in(t);
    loop(i, 0, t)
    {
        solve();
    }
    return 0;
}
