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
  TreeNode* searchBST(TreeNode* root, int val) {
        while(root)
        {
            if(val==root->val)
                return root;
            else if(val>root->val)
                root=root->right;
            else
                root=root->left;
        }
        return NULL;
    }