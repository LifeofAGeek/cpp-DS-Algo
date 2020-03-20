// AVL Tree implementation

#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    TreeNode *lchild;
    TreeNode *rchild;
    int data;
    int height;
}*root=NULL;

int Height(Node *p)
{
    int x, y;
    if (p == NULL)
        return 0;
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}

TreeNode *RInsert(TreeNode *p, int key) //Recursive Insert
{
    static TreeNode *t = NULL;
    if (p == NULL)
    {
        t = new TreeNode;
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