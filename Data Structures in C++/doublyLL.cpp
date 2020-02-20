#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
    Node *prev;
};
Node *first=nullptr;

void create_nodes(int arr[], int n)
{
    Node *t,*last;
    first=new Node;
    first->value=arr[0];
    first->prev=first->next=nullptr;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->value=arr[i];
        last->next=t;
        t->next=nullptr;
        last=t;
    }
}

void display()
{
    Node *p=first;
    while(p)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}

int main()
{
    int a[]={1,2,1,3,4,5};
    create_node(a,6);
    display();
    cout<<endl;
}
