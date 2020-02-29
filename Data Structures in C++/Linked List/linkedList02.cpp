#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *link;
};
Node *head; //global variable, can be accessed anywhere

int InsertAtBegin(int x)
{
    Node *temp=new Node;
    temp->data=x;
    temp->link=head;
    head=temp;
}

int Insert(int n,int x)
{
    Node *temp1=new Node;
    temp1->data=x;
    temp1->link=nullptr;
    if(n==1)
        temp1->link=head;
        head=temp1;
        return 0;
    Node *temp2=new Node;
    for(int i=0;i<n-2;i++)
        temp2=temp2->link;
    temp1->link=temp2->link;
    temp2->link=temp1;

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
    /*cout<<"How many nodes?"<<endl;
    int n,i,x;
    cin>>n;
    cout<<"let's create a list first by inserting node at the beginning"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter data of node"<<"("<<i<<")"<<endl;
        cin>>x;
        InsertAtBegin(x);
        Print(head);
    }*/
    Insert(1,11);
    Insert(2,12);
    Insert(3,13);
    Print(head);

}
