#include <bits/stdc++.h>
using namespace std;
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return NULL;
        if(root==p || root==q)
            return root;
        
        TreeNode* nodeleft=lowestCommonAncestor(root->left,p,q);
        TreeNode* noderight=lowestCommonAncestor(root->right,p,q);
        if(nodeleft!=NULL&&noderight!=NULL)
        {  
            return root;
        }
        if(nodeleft==NULL)
        {
            return noderight;
        }
        if(noderight==NULL)
        {
            return nodeleft;
        }
        return NULL;
    }