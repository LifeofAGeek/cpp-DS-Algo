#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define int long long

vector<int> c;
int n, d;

bool good(ld t)
{   
    ld curr_available=c[0]+t;
    for(int i=1;i<n;i++)
    {
       if(curr_available>c[i]+d){
           return false;
       }
       curr_available=max(curr_available,(ld)c[i])+t;
    }
    return true;
}

void solve(){
    //code goes here
    cin>>n>>d;
    c.resize(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    sort(c.begin(),c.end());
    ld l=0.0;
    ld r=1e10;
    for(int i=0;i<100;i++){
        ld m=(r+l)/2;
        int check=good(m);
        if(check) l=m;
        else r=m;
    }
    cout<<fixed<<setprecision(6);
    cout<<l<<endl;
}

int32_t main()
{
    int t=1;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}