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

  bool ok;
void comparethem(TreeNode* p,TreeNode* q)
{
    if((p==NULL && q!=NULL )|| (p!=NULL && q==NULL)){
        ok=0;
        return;
    }
    if(p==NULL&& q==NULL){
        return ;
    }
    if(p->val!= q->val){
        ok=0;
    }
    
    comparethem(p->left, q->right);
comparethem(p->right, q->left);
}


  bool isSymmetric(TreeNode* root) {
    ok=1;
    comparethem(root->left,root->right);
    return ok;
    }

    int main() {
    // Simetrik bir ağaç oluşturalım:
    //        1
    //       / \
    //      2   2
    //     / \ / \
    //    3  4 4  3

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(3), new TreeNode(4));
    root->right = new TreeNode(2, new TreeNode(4), new TreeNode(3));

    if (isSymmetric(root)) {
        cout << "Ağaç simetriktir." << endl;
    } else {
        cout << "Ağaç simetrik değildir." << endl;
    }

    return 0;
}
