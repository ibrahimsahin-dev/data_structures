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

  bool res=0;
    void dfs(TreeNode* node,int val,int targetsum)
    {
        if(!node->left && !node->right)
        {
            cout<<"val degeri: "<<val<< "target"<< targetsum<<endl;
            if(val==targetsum)
                res=1;
            return;
        }
        if(node->left){
        dfs(node->left,(node->left->val+val),targetsum);
        }
        if(node->right){
        dfs(node->right,(node->right->val+val),targetsum);
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return 0;
        dfs(root,root->val,targetSum);
        return res;
    }