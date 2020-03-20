// AVL Tree implementation

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    TreeNode *lchild;
    TreeNode *rchild;
    int data;
    int height;
} *root = NULL;

int NodeHeight(TreeNode *p)
{
    int hl, hr;
    hl = p && p->lchild ? (p->lchild->height) : 0;
    hr = p && p->rchild ? (p->rchild->height) : 0;
    return hl > hr ? hl + 1 : hr + 1;
}

int BalanceFactor(TreeNode *p)
{
    int hl, hr;
    hl = p && p->lchild ? (p->lchild->height) : 0;
    hr = p && p->rchild ? (p->rchild->height) : 0;
    return hl - hr;
}

TreeNode *LLRotation(TreeNode *p)
{
    TreeNode *pl = p->lchild, *plr = pl->rchild;
    pl->rchild = p;
    p->lchild = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
    if (root == p)
        root = pl;
    return pl;
}

TreeNode *LRRotation(TreeNode *p)
{
    TreeNode *pl=p->lchild, *plr=pl->rchild;
    pl->rchild=plr->lchild;
    p->lchild=plr->rchild;

    plr->lchild=pl;
    plr->rchild=p;

    pl->height=NodeHeight(pl);
    p->height=NodeHeight(p);
    plr->height=NodeHeight(plr);

    if(root==p)
    {
        
    }
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

    p->height = NodeHeight(p);

    if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == 1)
        return LLRotation(p);
    else if (BalanceFactor(p) == 2 && BalanceFactor(p->lchild) == -1)
        return LRRotation(p);
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == -1)
        return RRRotation(p);
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rchild) == 1)
        return RLRotation(p);

    return p;
}