#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int divide(int dividend, int divisor) {
 ll m=dividend; ll n=divisor;
 int sign=(m<0)^(n<0)?-1:1;
 m=abs(m); n=abs(n);
 ll quo=0;ll temp=0;
 for(ll i=31;i>=0;i--)
 {
     if(temp+(n<<i)<=m)
     {
         temp+=n<<i;
         quo=quo|(1ll<<i);
     }
 }
    return sign*quo;
}

int main()
{
    int a=43,b=8;
    cout<<divide(a,b);
}
