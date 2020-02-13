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

void Display(struct Node *p)
{
    while(p!=0)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    createNode(a,5);
    Display(head);
}
