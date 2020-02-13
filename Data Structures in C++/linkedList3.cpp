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

int main()
{
    int a[]={1,2,3,4,5};
    createNode(a,5);
    Display(head);
    cout<<endl;
    Display_Recursive(head);
    cout<<endl<<count_node(head);
}
