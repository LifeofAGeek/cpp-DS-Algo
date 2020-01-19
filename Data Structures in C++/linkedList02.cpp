#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *link;
};
Node *head; //global variable, can be accessed anywhere

int InsertAtBegin(int x) //Insert data in a node
{
    Node *temp=new Node;
    temp->data=x;
    temp->link=head;
    head=temp;
}

Node Print(Node *temp)
{
    cout<<"List is :";
    while(temp!=nullptr)
    {
        cout<<temp->data;
        temp=temp->link;

    }
    cout<<endl;
}
int main()
{
    head=nullptr; // empty list
    cout<<"How many nodes?"<<endl;
    int n,i,x;
    cin>>n;
    cout<<"let's create a list first by inserting node at the beginning"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter data of node"<<"("<<i<<")"<<endl;
        cin>>x;
        InsertAtBegin(x);
        Print(head);
    }
}
