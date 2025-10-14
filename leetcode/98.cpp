#include <myhead.h>
 bool res=1;
    bool isValidBST(TreeNode* root) {
        dfshelper(root);
        return res;
    }
    bool dfs(TreeNode* root)
    {
        bool ks1=1;
        bool ks2=1;
        if(root==NULL)
            return true;
        if(root->right)
        {
            if(root->right->val>root->val)
                ks1=1;
            else
                ks1=0;
        }
        if(root->left)
        {
            if(root->left->val<root->val)
                ks2=1;
            else
                ks2=0;
        }
        return ks1&&ks2;
        

    }
    void dfshelper(TreeNode* root)
    {
        if(root==NULL)
            return;
        bool v = dfs(root);
        if(v==0)
            res=0;
        dfshelper(root->left);
        dfshelper(root->right);
    }