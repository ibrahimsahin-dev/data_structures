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
   int val=0;
   bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int left=dfs(root->left);
        int right=dfs(root->right);
        if(abs(left-right)>1)
            return false;
         return isBalanced(root->left) && isBalanced(root->right);
    }
    int dfs(TreeNode* node)
    {
        if(node==NULL)
            return 0;
        int left=dfs(node->left);
        int right=dfs(node->right);
        return 1+max(left,right);
    }
   
    