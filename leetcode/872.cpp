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
vector<int> numnode1;
    vector<int> numnode2;
    void rec(TreeNode* node,vector<int>& vec)
{
     if (node == nullptr) {
        return;
    }

    if(node->left==nullptr && node->right==nullptr)
    {
        vec.push_back(node->val);
        return;
    }
    rec(node->left,vec);
    rec(node->right,vec);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        rec(root1,numnode1);
        rec(root2,numnode2);
        cout<<" numnode1 elemanlari ";
        for(int i: numnode1)
        {
            cout<<i;
        }
        cout<<endl<<endl;
        cout<<"numnode2 elemanlari ";
        for(int i: numnode2)
        {
            cout<<i;
        }
        return numnode1==numnode2;

    }