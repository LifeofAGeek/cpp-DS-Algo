#include<iostream>
#include<math.h>
using namespace std;

int gcd(int m,int n)
{
int mrcf;
for(int i=1;i<=min(m,n);i++)
{
if(m%i==0 && n%i==0)
  mcrf=i;
}
return(mcrf);
}

int main()
{
int cf=GCD(16,64);
cout<<cf;
}
