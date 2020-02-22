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
    Node *q=nullptr,*r=nullptr,*temp=head;
    for(int i=0;i<index;i++)
        temp=temp->next;
    temp->next=nullptr;
    temp=head;
    while(temp!=0)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
}
