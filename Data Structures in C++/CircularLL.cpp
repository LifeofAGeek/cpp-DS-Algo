#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node head=nullptr;

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

int main()
{

}
