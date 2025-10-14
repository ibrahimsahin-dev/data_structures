 #include "myhead.h"
 string arrow ="->";
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> vec;
        string s="";
        dfs(root,vec,s);
        return vec;
    }
    void dfs(TreeNode* root,vector<string>& vec, string s)
    {
        if(root==NULL)
            return;
        if(root->right==NULL && root->left==NULL)
        {
        
            s+=to_string(root->val);
            vec.push_back(s);
            return;
        }
        s+=to_string(root->val);
        s+=arrow;
        dfs(root->left,vec,s);
        dfs(root->right,vec,s);
    }