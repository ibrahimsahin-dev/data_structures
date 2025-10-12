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

   int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        else{
            int left,right;
            left=maxDepth(root->left);
            right=maxDepth(root->right);
            if(left>=right)
                return left+1;
            else
                return right+1;
        }
    }

    vector<int>vec;
    void bst(TreeNode* node)
    {
        if(node==NULL)
            return;
        if(node->left)
            bst(node->left);
        vec.push_back(node->val);
        if(node->right);
            bst(node->right);
    }

TreeNode* searchBST(TreeNode* root, int val) {
    while(!root)
    {
        if(val==root->val)
            return root;
        else if(val>root->val)
            searchBST(root->right,val);
        else
            searchBST(root->left,val);

    }
    return NULL;
}