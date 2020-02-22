#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};
Node *head;

void reverse_K_nodes(int index)
{
    Node *q=nullptr,*r=nullptr,*p,*temp=head,*join;
    for(int i=0;i<index;i++)
        temp=temp->next;
    join=temp->next;
    temp->next=nullptr;
    while(p!=0)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
}
