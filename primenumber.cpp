#include<iostream>
#include<math.h>
using namespace std;

int prime(int a, int b)
{
    for(int i=a;i<b;i++)
    {
        if (i == 1 || i == 0)
            continue;
        int flag=1;
        for(int j=2;j<=(int)sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<i<<endl;
    }
    return 0;
}

int main()
{
    prime(10,20);
}
