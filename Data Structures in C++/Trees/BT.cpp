#include <bits/stdc++.h>
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
        Q = new TreeNode*[size];
        front = rear = -1;
    }

    void enqueue(TreeNode *x);
    TreeNode* dequeue();
};

void Queue::enqueue(TreeNode *x)
{
    if (isFull())
        cout << "Queue is Full";
    else
    {
        Q[++rear] = x;
    }
}

TreeNode* Queue::dequeue()
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
    TreeNode *root;
    Tree() { root = NULL; }
    void CreateTree();
    void Preorder(TreeNode *p);
    void Postorder(TreeNode *p);
    void Inorder(TreeNode *p);
};
void Tree::CreateTree()
{
    TreeNode *p, *t;
    int x;
    Queue q(100);
    printf("Eneter root value ");
    scanf("%d", &x);
    root = new TreeNode;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        printf("eneter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = new TreeNode;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        printf("eneter right child of %d ", p->data);
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

void Tree::Preorder(TreeNode *p)
{
    if (p)
    {
        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Tree::Inorder(TreeNode *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}
void Tree::Postorder(TreeNode *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ", p->data);
    }
}

int main()
{
    Tree t;
    t.CreateTree();
    t.Preorder(root);
    cout<<endl;
    t.Postorder(root);
    cout<<endl;
    t.Inorder(root);
}