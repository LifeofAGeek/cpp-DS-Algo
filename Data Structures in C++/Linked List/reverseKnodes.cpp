#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int value;
    Node *next;
};
Node *head=nullptr;

void createNode(int arr[], int n) //array data to link list data
{
    int i;
    Node *t,*last;
    head=new Node;
    head->value=arr[0];
    head->next=nullptr;
    last=head;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->value=arr[i];
        t->next=nullptr;
        last->next=t;
        last=t;
    }

}

void Display(struct Node *p) // front to end
{   cout<<"Displaying LinkedList:"<<endl;
    while(p!=0)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}

void reverse_K_nodes(int index)
{
    Node *q=nullptr,*r=nullptr,*p=head,*temp=head,*join;
    for(int i=0;i<index-1;i++)
        temp=temp->next;
    join=temp->next;
    temp->next=nullptr;
    while(p!=0)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }head=q;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=join;
}

int main()
{
    int a[]={1,2,6,3,4,5};
    createNode(a,6);
    Display(head);
    cout<<endl;
    reverse_K_nodes(3);
    Display(head);
}
