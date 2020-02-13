#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};
Node *head=nullptr;

void createNode(int arr[], int n)
{
    int i;
    Node *t,*last;
    head=
}

void Display(struct Node *p)
{
    while(p!=0)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}

