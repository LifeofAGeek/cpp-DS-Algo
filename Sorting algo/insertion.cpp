#include<bits/stdc++.h>
using namespace std;

class InserttionSort
{
public:
    int A[];
    int n;

    InserttionSort(int x[], int len)
    {
        n=len;
        A=x[n];
    }

    void swaping(int *xp, int *yp)
    {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    }

    void sorting()
    {
        int value,hole;
        for(int i=1;i<n;i++)
        {
            value=A[i];
            hole=i;
            while(hole>0 && A[hole-1]>value)
            {
                swaping(&A[hole],&A[hole-1]);
                hole--;
            }
            A[hole]=value;
        }

    }
};

int main()
{
    int A[]={2,5,31,22,9,74,11,32,7,87,65,40,44,86,91,63};
    int n=sizeof(A)/sizeof(A[0]);
    InserttionSort arr(A,n);
}

