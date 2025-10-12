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

int maxLevelSum_bruteForce(TreeNode* root) {
        int depth=0;
       queue<pair<TreeNode*,int>> q;
       int sayac=1;
       q.push(pair(root,sayac));
       int biggest=root->val;
       while(!q.empty())
       {
        int sonsize=q.size();
        
        int temptoplam=0;
        for(int i=0;i<sonsize;i++)
        {
            TreeNode* temp=q.front().first;
            temptoplam+=q.front().first->val;
            q.pop();
            if(temp->left)
            {
                q.push(pair(temp->left,sayac+1));
            }
            if(temp->right)
            {
                q.push(pair(temp->right,sayac+1));
            }
        }
        if(temptoplam>biggest)
        {
            biggest=temptoplam;
            if(!q.empty())
                depth=q.front().second;
	 
        }
        
       }
       return depth;
    }
    