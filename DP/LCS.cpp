//longest common subseq. 
#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define int long long
const int mod =1e9+7;
string s1,s2;
int dp[10001][10001];

int LCS(int n1, int n2){
    if(n1<0 or n2<0) return 0;

    if(dp[n1][n2]!=-1) return dp[n1][n2];

    if(s1[n1]==s2[n2]){
        return dp[n1][n2]=1+LCS(n1-1,n2-1);
    }
    else{
        return dp[n1][n2]=max(LCS(n1-1,n2),LCS(n1,n2-1));
    }
}

void solve(){
    //code goes here
    cin>>s1>>s2;
    int n1=s1.length(), n2=s2.length();
    memset(dp,-1,sizeof(dp));
    int ans=LCS(n1-1,n2-1);
    cout<<ans;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t=1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}