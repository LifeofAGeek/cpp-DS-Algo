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
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

void display_recursive(Node *p)
{
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        display_recursive(p->next);
        cout<<p->data<<" ";
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
        t->data=arr[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void insert_node(int val, int pos)
{
    Node *t,*p;
    t=new Node;
    t->data=val;
    if(pos>0)
    {
        p=head;
        for(int i=1;i<pos-1;i++)
            p=p->next;
        t->next=p->next;
        p->next=t;
    }
    else{
        p=head;
        t->next=head;
        while(p->next!=head)
            p=p->next;
        p->next=t;
        head=t;
    }
}

int main()
{
    int a[]={1,2,1,3,4,5};
    create_node(a,6);
    display(head);
    cout<<endl;
    display_recursive(head);
    cout<<endl;
    insert_node(2,3);
    cout<<endl<<"After Insertion"<<endl;
    display(head);
}
