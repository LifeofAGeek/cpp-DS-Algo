//coin change maximum number of ways
#include<bits/stdc++.h>
using namespace std;
#define ld long double
int dp[10001][10001];
int coin[10001];
int n;  // sum 
int sz; // size of coin array

int helper(int sum, int i){
    if(sum==0) {
        return 1;
    }
    if(sum<0) {
        return 0;
    }
    if(i==sz) {
        return 0;
    }

    int &ans=dp[sum][i];

    if(ans!=-1) {
        return ans;
    }

    ans = helper(sum-coin[i],i) + helper(sum,i+1); // maximum no. of ways
    return ans;
}

void solve(){
    //code goes here
    cin>>n>>sz;

    for(int i=0;i<sz;i++) cin>>coin[i];

    memset(dp,-1,sizeof(dp));

    cout<<helper(n,0)<<endl;
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