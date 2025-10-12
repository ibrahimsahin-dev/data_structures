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

int counter=0;
    int pathSum(TreeNode* root, int targetSum) {
        dfs(root,targetSum);
        return counter;
    }
    
    void dfs(TreeNode* node, int target)
    {
        if(node==NULL)
            return;
        dfshelper(node,target,0);
        if(node->left)
            dfs(node->left,target);
        if(node->right)
            dfs(node->right,target);
    }
    void dfshelper(TreeNode* node,int target,long elde)
    {
        if(node==NULL)
            return;
        elde+=node->val;
        if(elde==target)
            counter++;
        if(node->left)
            dfshelper(node->left,target,elde);
        if(node->right)
            dfshelper(node->right,target,elde);
    }