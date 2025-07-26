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


void my_func(TreeNode*& p, int key){
    if (p == NULL) {
        p = new TreeNode(key);
        return;
    }
    if (key < p->val) {
        my_func(p->left, key);
    } else {
        my_func(p->right, key);
    }
    
}




  TreeNode* sortedArrayToBST(vector<int>& nums) {

        TreeNode* root = new TreeNode(nums[nums.size()/2]);

      if(nums.size()%2==1)
      {
        int i=nums.size()/2-1;
        int j=nums.size()/2+1;
        while(i>=0)
        {
            my_func(root,nums[i]);
            i--;
        }
        while(j<nums.size())
        {
            my_func(root,nums[j]);
            j++;
        }   
      } 
      
      return root;
    }

 void traverse(TreeNode* node){
    if(node==NULL){
        return;
    }
    else{
    cout<<node->val;
    traverse(node->right);
        traverse(node->left);
        
    }
}
    

int main() {
   TreeNode* root = new TreeNode(0);
 vector<int> nums = {-10, -3, 0, 5, 9};
 TreeNode* root1 = sortedArrayToBST(nums);
    cout << "Recursive: ";
    traverse(root1);
    cout << endl;
}
