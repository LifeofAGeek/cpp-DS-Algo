#include <stdio.h>
#include <stdlib.h>

void merge(int *a, int *l, int nL, int *r, int nR)
{
    // int nL = sizeof(l)/sizeof(int);
    // int nR = sizeof(r)/sizeof(int);
    int i=0,j=0,k=0;
    while(i < nL && j < nR)
    {
        if(l[i] < r[j])
            a[k++] = l[i++];
        else
            a[k++] = r[j++];
    }
    while(i < nL)
    {
        a[k++] = l[i++];
    }
    while(j < nR)
    {
        a[k++] = r[j++];
    }
}

void mergesort(int *a, int len)
{
    if(len<2)
        return;
    int mid = len/2;
    int *left = (int *)malloc(mid*sizeof(int));
    int *right = (int *)malloc(sizeof(int)*(len-mid));
    for(int i=0;i<mid;i++)
        left[i] = a[i];
    for(int i=mid;i<len;i++)
        right[i-mid] = a[i];
    mergesort(left, mid);
    mergesort(right, len-mid);
    merge(a, left, mid, right, len-mid);
}

int main()
{
    int a[] = {2,4,1,6,8,5,3,7};
    printf("Original Array:\n");
    for (int i = 0; i < 8; i++)
    	printf("%d ", a[i]);
    printf("\n");
    mergesort(a, 8);
    for(int i = 0; i < 8; i++)
        printf("%d ", a[i]);
    printf("\n");
}
