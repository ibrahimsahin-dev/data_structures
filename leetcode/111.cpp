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

  int minDepth(TreeNode* root) {
        int res=0;
        int* temp=&res;
        dfs(root,0,*temp);
        return *temp;
    }
    void dfs(TreeNode* node,int val,int& count)
    {
        if(node->left==NULL && node->right==NULL)
            {
                if(count==0)
                    count=val;
                else if(count>val)
                    count=val;
                return;
            }          
        dfs(node->left,val+1,count);
        dfs(node->right,val+1,count);
    }