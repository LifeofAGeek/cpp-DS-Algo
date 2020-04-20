#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
    
TreeNode* helper(vector<int> &pre, int rootindex, int r)
    {
        if(rootindex>=r) return NULL;
        
        int value=pre[rootindex];
        TreeNode *root=new TreeNode(value);
        int i=rootindex+1;
        while(i<pre.size() && pre[i]<value) i++;
        root->left=helper(pre,rootindex+1,i);
        root->right=helper(pre,i,r);
        return root;
    }
    
TreeNode *bstFromPreorder(vector<int> &preorder)
    {
        return helper(preorder,0,preorder.size());
    }

int main() {
  vector<int> p={8,5,1,7,10,12};
  cout<<bstFromPreorder(p);
  return 0;
}
