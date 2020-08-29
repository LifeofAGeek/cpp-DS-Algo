#include<bits/stdc++.h>
using namespace std;
#define ld long double

vector<int> x, v;
int n;

bool good(ld t)
{   
    ld mini = INT_MAX, maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        ld a = x[i] - t*v[i];
        ld b = x[i] + t*v[i];
        mini = min(mini, b);
        maxi = max(maxi, a);
    }
    if(maxi<=mini)
        return 1;
    return 0;
}

void solve(){
    //code goes here
    cin>>n;
    x.resize(n);
    v.resize(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        x[i]=a;
        v[i]=b;
    }

    ld l=0.0;
    ld r=1e9;
    ld m;
    cout<<setprecision(20);
    for(int i=0;i<100;i++){
        m=l+(r-l)/2;
        int check=good(m);
        if(check) r=m;
        else l=m;
    }
    cout<<r;
}

int32_t main()
{
    int t=1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}