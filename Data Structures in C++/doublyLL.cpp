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
    cout<<"Displaying Doubly LinkedList:"<<endl;
    Node *p=first;
    while(p)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}

void insert_node(int val, int index)
{
    Node *t=new Node,*p=first;
    t->value=val;
    if(index==1)
    {
        first->prev=t;
        t->next=first;
        t->prev=nullptr;
        first=t;
    }
    else{

    }
}

int main()
{
    int a[]={1,2,1,3,4,5};
    create_nodes(a,6);
    display();
    cout<<endl;
}
