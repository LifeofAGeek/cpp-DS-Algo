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
    head=new Node;
    head->data=arr[0];
    head->next=nullptr;
    last=head;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=arr[i];
        t
    }

}

void Display(struct Node *p)
{
    while(p!=0)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}

