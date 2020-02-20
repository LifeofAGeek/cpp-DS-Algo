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
        for(int i=1;i<index-1;i++)
            p=p->next;
        t->prev=p;
        t->next=p->next;
        p->next->prev=t;
        p->next=t;
    }
}

void delete_node(int index)
{
    Node *p=first;
    if(index==1)
    {
        first=first->next;
        delete(p);
        if(first) first->prev=nullptr;
    }
    else{
        for(int i=1;i<index;i++)
            p=p->next;
        p->prev->next=p->next;
        if(p->next) p->next->prev=p->prev;
        delete(p);
    }
}

int main()
{
    int a[]={1,2,1,3,4,5};
    create_nodes(a,6);
    display();
    cout<<endl;
    insert_node(2,5);
    cout<<endl<<"After Insertion"<<endl;
    display();
}
