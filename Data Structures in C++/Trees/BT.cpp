#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    TreeNode *lchild;
    TreeNode *rchild;
    int data;
};

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    bool isEmpty()
    {
        return (rear == front) ? true : false;
    }
    bool isFull()
    {
        return (rear == size - 1) ? true : false;
    }

    Queue(int size)
    {
        this->size = size;
        Q = new int[size];
        front = rear = -1;
    }

    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x)
{
    if (isFull())
        cout << "Queue is Full";
    else
    {
        Q[++rear] = x;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (isEmpty())
        printf("Queue is Empty\n");
    else
    {
        x = Q[(front++) + 1];
    }
    return x;
}

void Queue::display()
{
    for (int i = front + 1; i <= rear; i++)
        printf("%d ", Q[i]);
    printf("\n");
}

void create_tree()
{
    Queue q(10);
    int x;
    cout<<"Enter value of root"<<endl;
    cin>>x;
    TreeNode *root;
    root->data=x;
    root->lchild=root->rchild=nullptr;
    q.enqueue(root);
    while(!q.isEmpty())
    {
        int Lchild,Rchild;
        cout<<"Enter Value of Left Child if any else enter -1"<<endl;
        cin>>Lchild;
        cout<<"Enter Value of Right Child if any else enter -1"<<endl;
        cin>>Rchild;
        TreeNode *p=q.dequeue();

        if(Lchild!=-1)
        {
            TreeNode *temp;
            temp->data=Lchild;
            temp->lchild=temp->rchild=nullptr;
            q.enqueue(temp);
            p->lchild=temp;
        }
        
        if(Rchild!=-1)
        {
            TreeNode *temp;
            temp->data=Rchild;
            temp->lchild=temp->rchild=nullptr;
            q.enqueue(temp);
            p->rchild=temp;
        }
    }
}