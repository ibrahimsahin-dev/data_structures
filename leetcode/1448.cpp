
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
vector<int> vec;
    int count_goodnodes=0;
    bool vectorchecking(vector<int> x)
    {
        int element=*max_element(vec.begin(),vec.end());
        if(element>*vec.end())
        {
            return false;
        }
        return true;
    }
    void rec(TreeNode* node)
    {
        if(node==nullptr)
        {
            return;
        }
        vec.push_back(node->val);
        rec(node->left);
        rec(node->right);
        if(vectorchecking(vec))
        {
            count_goodnodes++;
        }
        vec.pop_back();
    }
    int goodNodes(TreeNode* root) {
        rec(root);
    }