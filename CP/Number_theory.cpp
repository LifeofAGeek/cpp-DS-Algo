#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
vector<int> Prime; 

//-----------------------------------------------------------------------------------------------//

//primality test is to determine whether the input integer is a prime num or not.
string primality_test(int N)
{
    /* brute force approach is O(n) i.e.,
    if(n==1) return false;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0) return false;
    }
    return true; */

    /* Better approach -> all divisor of a number occurs in a pair of (a,b) s.t. a*b=n.
    For example n=12
    d=1,2,3,4,6,12 (divisors)
    Pairs are : (1,12) (3,4) (2,6)
    For a divisor pair(a,b) one of them lies below sqrt(n) and other lies above sqrt(n) -> google it for proof if you don't appreciate.
    */

    if(N==1) return "NO";
    for (int i = 2; i <= (int)sqrt(N); i++) //O(sqrt(n))
    {
        if(N%i==0) return "NO";
    }
    return "YES";

}

//---------------------------------------------------------------------------------------------------------//

/*
This is another primality test technique -> Sieve of Eratosthenes,
which is used to generate prime numbers in a given range like from 1 to N , 
where N is not more than 10^7. 
The running time complexity of this algorithm is O(Nlog(logN)).
The Space Complexity of this algorithm is O(N)
*/
vector<int> SieveOfEratosthenes(int n) 
{ 
    int prime[n+1]; 
    prime[0]=prime[1]=0;
    for(int i=2;i<=n;i++) prime[i]=1;
  
    for (int i=2; i*i<=n; i++) 
    { 
        if (prime[i]) 
        { 
            for (int j=i*i; j<=n; j+=i) 
                prime[j]=0; 
        } 
    } 

    for (int p=2; p<=n; p++) 
       if (prime[p]) {
            Prime.push_back(p);
            //cout << p << " "; 
       }
    cout<<endl;
    return Prime;
}

//--------------------------------------------------------------------------------------------//

void segmented_sieve(ll l, ll u)
{
    vector<int> prime = SieveOfEratosthenes(sqrt(u));
    int size=u-l+1;
    int arr[size];
    for(int i=0;i<size;i++) arr[i]=1;
    for(auto p:prime){
        for(ll j=l;j<=u;j++)
        {
            if(j==p) continue;
            if(j%p==0) arr[j-l]=0;
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]) cout<<i+l<<" ";
    }
    cout<<endl;
}


//--------------------------------------------------------------------------------------------//

//Prime Factorization in O(sqrt(N))
//eg., N=100 -> 2^2 * 5^2
void Prime_factors(int n)
{
    /*
    //Brute force approach - O(n)
    //it seems to be O(log(n)) but worst case occur when the number itself is a prime.
    //eg., 10^9+7 -> 1e9+7 
    int c;
    cout<<"Prime factors of "<<n<<" are:"<<endl;
    for(int i=2;i<=n;i++)
    {
        c=0;
        if(n%i==0)
        {
            while(n%i==0)
            c++ , n/=i;
            cout<<i<<"^"<<c<<endl;
        }
    }
    */

    //Optimized approach
    //If N is composite, then there is atlest 1 prime divisor of N below sqrt(N).
    cout<<"Prime factors of "<<n<<" are:"<<endl;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int c=0;
            while(n%i==0)
            c++ , n/=i;
            cout<<i<<"^"<<c<<endl;
        }
    }
    if(n>1) cout<<n<<"^"<<1<<endl;
}

//----------------------------------------------------------------------------------------------//

/*
Binary Exponentiation (BE)
a^n is O(logn) time
why BE ? -> for big power value such as 2^13 -> O(n) approach will give TLE
thus using BE we can calculate the same in log(2^13) time.
*/

void BE(int base, int power, int mod=1e9+7) //Modular Exponentiation -> mod value
{
    int ans=1;
    while (power)
    {
        if(power%2)
        ans=(ans*base)%mod , power--;
        else
        base=(base*base)%mod , power/=2;
    }
    cout<<"Computed value is = "<<ans<<endl;
}

//------------------------------------------------------------------------------------------------//

//Prime Factorization using Sieve in O(log(N))
void sieve_prime_fact(int n)
{
    int spf[n+1]; //smallest prime factors array
    spf[0]=spf[1]=0;
    for(int i=2;i<=n;i++) spf[i]=1;
  
    for (int i=2; i<=n; i++) 
    { 
        if (spf[i]==1) 
        { 
            for (int j=i; j<=n; j+=i) 
                spf[j]=i; 
        } 
    } 
        
    while (n!=1)
    {
        cout<<spf[n]<<" ";
         n=n/spf[n];
     }
}

//uncomment the function calls then run
int main()
{
    //cout<<primality_test(5)<<endl;
    //SieveOfEratosthenes(15);
    //Prime_factors(26);
    //BE(2,13);
    //sieve_prime_fact(24);
    segmented_sieve(51,100);
}