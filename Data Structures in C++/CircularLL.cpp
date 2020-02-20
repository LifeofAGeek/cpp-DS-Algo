#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head;

void display(Node *p)
{
     cout<<"Displaying LinkedList:"<<endl;
    do
    {
        cout<<p->next<<" ";
        p=p->next;
    }while(p!=head);
}

void display_recursive(Node *p)
{
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        cout<<p->data<<" ";
        display_recursive(p->next);
    }
    flag=0;
}

void create_node(int arr[], int n)
{
    int i;
    Node *t, *last;
    head=new Node;
    head->data=arr[0];
    head->next=head;
    last=head;
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->datat=arr[i];
        t->next=nullptr;
        last->next=t;
        last=t;
    }
}

int main()
{

}
