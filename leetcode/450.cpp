#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  bool ustegirdimi=0;
TreeNode* deleteNode_bruteforce(TreeNode* root, int key) {
        if(root==NULL)
            return NULL;
        TreeNode*mainroot=root;
        while(root)
        {
            if(root->val==key)
            {
                return NULL;
            }
            if(root->left)
            {
                if(root->left->val==key)
                {
                    ustegirdimi=1;
                    TreeNode* temo=root->left->right;
                    TreeNode* soldaki=root->left->left;
                    delete root->left;
                    root->left=temo;
                    temo->left=soldaki;
                    return mainroot;
                }
            }
            if(root->right)
            {
                if(root->right->val==key)
                {
                    ustegirdimi=1;
                    TreeNode* temo=root->right->left;
                    TreeNode* soldaki=root->right->right;
                    delete root->right;
                    root->right=temo;
                    temo->right=soldaki;
                    return mainroot;
                }
            }
            if(!ustegirdimi)
            {
                ustegirdimi=0;
            if(root->val>key)
                root=root->left;
            else
                root=root->right;
            }
        }
        return mainroot;
    }
    