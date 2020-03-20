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

int NodeHeight(TreeNode *p)
{
    int hl, hr;
    hl = p && p->lchild?(p->lchild->height):0;
    hr = p && p->rchild?(p->rchild->height):0;
    return hl > hr ? hl + 1 : hr + 1;
}

int BalanceFactor(TreeNode *p)
{
    int hl, hr;
    hl = p && p->lchild?(p->lchild->height):0;
    hr = p && p->rchild?(p->rchild->height):0;
    return hl-hr;
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
    
    p->height=NodeHeight(p);
    return p;
}