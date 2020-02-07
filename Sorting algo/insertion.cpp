#include<bits/stdc++.h>
using namespace std;

class InserttionSort
{
public:
    int A[];

    InserttionSort(int x[])
    {
        A=x;
    }

    void sorting()
    {
        int value,hole;
        int n=sizeof(A)/sizeof(A[0]);
        for(int i=1;i<n;i++)
        {
            value=A[i];
            hole=i;
            while(hole>0 && A[hole-1]>value)
            {

            }
        }

    }
};

int main()
{

}

