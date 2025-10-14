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
vector<int> preorderTraversal(TreeNode* root) {
        vector<int> vec;
        dfs(vec, root);
        return vec;
    }
    void dfs(vector<int>& vec,TreeNode* root)
    {
        if(root==NULL)
            return;
        vec.push_back(root->val);
        dfs(vec,root->left);
        dfs(vec,root->right);

    }