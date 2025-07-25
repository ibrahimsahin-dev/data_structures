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
 
vector<int> x;
void inorderTraver(TreeNode* root)
{
    if(root==NULL){
        return;
    }
    inorderTraver(root->left);
    x.push_back(root->val);
    inorderTraver(root->right);
}

    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraver(root);
        return x;
    }
vector<int> inorderTraversal2(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        TreeNode* current = root;
        int i=1;

        while (current != nullptr || !s.empty()) {
            cout<<"ilk dongude "<< i<< ". siradayiz"<< endl;
            while (current != nullptr) {
                 cout<<"ikinci dongude "<< current->val<< " dugumundeyuz"<< endl<< endl;

                s.push(current);
                current = current->left;
            }
            current = s.top();
            s.pop();
            result.push_back(current->val);
            current = current->right;
            i++;
        }
        return result;
    }

    int main() {
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node7 = new TreeNode(7);
    TreeNode* node12 = new TreeNode(12);
    TreeNode* node17 = new TreeNode(17);

    TreeNode* node5 = new TreeNode(5, node2, node7);
    TreeNode* node15 = new TreeNode(15, node12, node17);

    TreeNode* root = new TreeNode(10, node5, node15);

    
    vector<int> inorderResult =inorderTraversal2(root);

    cout << "Inorder Dolaşım Sonucu: ";
    for (int val : inorderResult) {
        cout << val << " ";
    }
    cout << endl;

    // Bellek temizleme
    delete node2;
    delete node7;
    delete node12;
    delete node17;
    delete node5;
    delete node15;
    delete root;

    return 0;
}