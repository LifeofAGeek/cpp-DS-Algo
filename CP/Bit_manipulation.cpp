#include <bits/stdc++.h>
using namespace std;

void LRshifts(int a,int b)
{
    // left and right shifts
    a = a >> 1;
    b = b << 1;
    cout << "L & R shifts " << a << " " << b << endl;
}

void check_set(int a,int i)
{
    //check ith set bit
    bool ans=a & (1<<i);
    cout<<i<<"th bit is "<<ans<<endl;
}

void count_set_bits(int a)
{
    //count set bits -> 15 -> 1111 -> 4
    int c=0;
    int f=log2(a);
    for(int i=f;i>=0;--i) {
        if(a & (1<<i)) c++;
    }
    cout<<"set bits = "<<c<<endl;
}

int main()
{
    LRshifts(14,7);
    check_set(14,0);
    count_set_bits(15);
    
}
