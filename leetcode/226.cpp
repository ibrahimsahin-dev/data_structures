#include "myhead.h"
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        dfs(root);
        return root;
    }
    TreeNode* invert(TreeNode* root)
    {
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        return root;
    }
    void dfs(TreeNode * root)
    {
        if(root==NULL )
            return;
        invert(root);
        dfs(root->left);
        dfs(root->right);
    }