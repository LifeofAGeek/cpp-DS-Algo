#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define int long long
const int m =1e9+7;

void solve(){
    //code goes here
    int n;
    cin>>n;
    int arr[n];
    int ones=0, zeros=0;
    for(auto &a:arr) {
        cin>>a; 
        if(a==1) ones++;
        else zeros++;
    }

    if(ones==n){
        cout<<"No\n";
        return;
    }
    if(ones==n-1){
        cout<<"Yes\n";
        return;
    }

    vector<int> seg;
    int c=0;
    for(int i=1;i<n;i++){
        if(arr[i]==0){
            c++;
            continue;
        }
        else{
            if(c!=0) seg.push_back(c);
            c=0;
        }
    }

    sort(seg.begin(),seg.end());

    //for(auto a:seg) cout<<a<<" ";
    int sz=seg.size();
    if(sz>=2){
        int mx1=seg[sz-1], mx2=seg[sz-2];
        if(mx1&1 and mx2<(mx1+1)/2){
            cout<<"Yes\n";
        }
        else cout<<"No\n";
    }
    else{
        if(seg[0]&1) cout<<"Yes\n";
        else cout<<"No\n";
    }
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