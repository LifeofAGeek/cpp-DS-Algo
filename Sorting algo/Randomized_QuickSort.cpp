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

int partion(int a[],int start,int end){
    // randomized partition
    int randomIdx=(rand()%(end-start+1))+start;
    swap(a[randomIdx],a[end]);
    // normal partition
    int pivot=a[end];
    int Pidx=start,i=start;
    while(i<end){
        if(a[i]<=pivot){
            swap(a[i],a[Pidx]);
            Pidx++;
        }
        i++;
    }
    swap(a[Pidx],a[end]);
    return Pidx;
}

void Randomized_QuickSort(int a[], int start, int end){
    if(start<end){
        int P = partion(a,start,end);
        Randomized_QuickSort(a,start,P-1);
        Randomized_QuickSort(a,P+1,end);
    }
    return;
}

void solve(){
    int n;
    cin>>n;
    int a[n]; read(a,n);
    Randomized_QuickSort(a,0,n-1);
    for(auto x:a) cout<<x<<" ";
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
