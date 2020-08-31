//coin change - minimum number of coins req. 
#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define int long long
const int m =1e9+7;

void solve(){
    //code goes here
    int n,target;
    cin>>n>>target;
    int coin[n];
    for(int i=0;i<n;i++) cin>>coin[i];
    int dp[target+1];

    dp[0]=0;
    for(int i=1;i<=target;i++) dp[i]=INT_MAX-1;

    for(int i=1;i<=target;i++){
        for(int j=0;j<n;j++){
            if(coin[j]<=i){
                int ans=dp[i-coin[j]];
                if(ans+1<dp[i])
                dp[i]=ans+1;
            }
        }
    }
    cout<<dp[target];
}

int32_t main()
{
    int t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}