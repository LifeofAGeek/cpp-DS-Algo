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
{
    while(p!=0)
    {
        cout<<p->value<<" ";
        p=p->next;
    }
}

void Display_Recursive(struct Node *p) // end to front
{
    if(p!=0)
    {
        Display_Recursive(p->next);
        cout<<p->value<<" ";
    }
}

int count_node(struct Node *p) //counting number of nodes in LinkList
{
    if(p==0)
        return 0;
    else
        return (count_node(p->next)+1);
}

int add_nodesValue(struct Node *p)
{
    if(p==0)
        return 0;
    else
        return add_nodesValue(p->next)+p->value;
}

int maximum_node(struct Node *p)
{
    int maxi=INT_MIN;
    while(p!=nullptr)
    {
        if((p->value)>maxi)
            maxi=p->value;
        p=p->next;
    }
    return(maxi);
}

int main()
{
    int a[]={1,2,3,4,5};
    createNode(a,5);
    Display(head);
    cout<<endl;
    Display_Recursive(head);
    cout<<endl<<"No. of nodes = "<<count_node(head);
    cout<<endl<<"Sum of data of all nodes = "<<add_nodesValue(head);
    cout<<endl<<"Maximum node value is = "<<maximum_node(head);
}
