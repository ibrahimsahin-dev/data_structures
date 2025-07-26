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