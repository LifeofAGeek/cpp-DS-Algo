#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    TreeNode *lchild;
    TreeNode *rchild;
    int data;
};
TreeNode *root;

class Queue
{
private:
    int size;
    int front;
    int rear;
    struct TreeNode **Q;

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
        Q = new TreeNode *[size];
        front = rear = -1;
    }

    void enqueue(TreeNode *x);
    TreeNode *dequeue();
};
Queue q(100);

void Queue::enqueue(TreeNode *x)
{
    if (isFull())
        cout << "Queue is Full";
    else
    {
        Q[++rear] = x;
    }
}

TreeNode *Queue::dequeue()
{
    TreeNode *x = nullptr;
    if (isEmpty())
        printf("Queue is Empty\n");
    else
    {
        x = Q[(front++) + 1];
    }
    return x;
}

class Tree
{
public:
    Tree() { root = NULL; }
    void CreateTree();
    void Inorder(TreeNode *p);
};

void Tree::CreateTree()
{
    TreeNode *p, *t;
    int x;
    printf("Eneter root value ");
    scanf("%d", &x);
    root = new TreeNode;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        printf("eneter left child of %d :", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new TreeNode;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("eneter right child of %d :", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new TreeNode;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}