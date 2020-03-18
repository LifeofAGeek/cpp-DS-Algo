// BST Insert, search and Delete

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node *lchild;
    int data;
    Node *rchild;
} *root = NULL;

void Insert(int key)
{
    Node *t = root;
    Node *r = NULL, *p;
    if (root == NULL)
    {
        p = (Node *)malloc(sizeof(Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (key < t->data)
            t = t->lchild;
        else if (key > t->data)
            t = t->rchild;
        else
            return;
    }
    p = (Node *)malloc(sizeof(Node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if (key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}

void Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
}

Node *Search(int key)
{
    Node *t = root;
    while (t != NULL)
    {
        if (key == t->data)
            return t;
        else if (key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}

Node *RInsert(Node *p, int key) //Recursive Insert
{
    static Node *t = NULL;
    if (p == NULL)
    {
        t = (Node *)malloc(sizeof(Node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
        p->lchild = RInsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = RInsert(p->rchild, key);
    return p;
}

int Height(Node *p)
{
    int x, y;
    if (p == NULL)
        return 0;
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}

Node *InPre(Node *p)
{
    while (p && p->rchild != NULL)
        p = p->rchild;
    return p;
}

Node *InSucc(Node *p)
{
    while (p && p->lchild != NULL)
        p = p->lchild;
    return p;
}

Node *Delete(Node *p, int key) //recursively
{
    Node *q;
    if (p == NULL)
        return NULL;
    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
            root = NULL;
        free(p);
        return NULL;
    }
    if (key < p->data)
        p->lchild = Delete(p->lchild, key);
    else if (key > p->data)
        p->rchild = Delete(p->rchild, key);
    else
    {
        if (Height(p->lchild) > Height(p->rchild))
        {
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}

Node* Rsearch(Node *t, int x)
{
    if (t==NULL) return NULL;
    if (t->data==x) return t;
    else if (x < t->data) return Rsearch(t->lchild,x);
    else return Rsearch(t->rchild,x);
}

int main()
{
    Node *temp;
    root = RInsert(root, 50);
    Insert(10);
    Insert(40);
    Insert(20);
    Insert(30);
    Delete(root, 30);
    Inorder(root);
    printf("\n");
    temp = Rsearch(root,10);
    if (temp != NULL)
        printf("element %d is found\n", temp->data);
    else
        printf("element is not found\n");
    return 0;
}