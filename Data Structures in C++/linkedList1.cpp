#include<iostream>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    Node *link;
};
Node *head; //global variable, can be accessed anywhere

int Insert(int x) //Insert data in a node
{
    Node *temp=new node;
    temp->data=x;
    temp->link=head;
    if(head!=nullptr)
        temp->link=head;
    head=temp;
}

void Print()
{
    Node *temp=head;
    cout<<
    while(temp!=nullptr)
    {
        cout<<temp->data;
        temp=temp->link;

    }
}
int main()
{
    head=nullptr; // empty list
    cout<<"How many nodes?"<<endl;
    int n,i,x;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter data of node:"<<i<<endl;
        cin>>x;
        Insert(x);
        Print();
    }


}
