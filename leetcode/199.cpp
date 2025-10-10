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
int right_counter=0;
TreeNode* son_nokta=NULL;
bool is_else=0;
vector<int> rightSideView_bruteforce(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    son_nokta=root;
    vector<int> vec;
    
    while(!q.empty())
    {
        TreeNode* temp=q.front();
        q.pop();
        vec.push_back(temp->val);
        if(is_else)
        {
        vec.pop_back();
        is_else=0;
        }
        if(temp->right)
        {
            is_else=0;
            right_counter++;
            q.push(temp->right);
        }
        else if(temp->left) {
        is_else=0;

            son_nokta=temp->left;
            right_counter++;
            q.push(temp->left);
        }
        else{
            is_else=1;
            if(son_nokta==temp)
                return vec;
            TreeNode* temp=son_nokta;
            while(right_counter>0 && temp->left)
            {
                temp=temp->left;
                right_counter--;
            }
            if(right_counter!=0)
            {
                return vec;
            }
            right_counter=0;
            son_nokta=temp;
            q.push(temp);
        }
    }
    return vec;
    }

    vector<int> rightSideView_optimal(TreeNode* root) {
        if (!root) {
        return {}; // Ağaç boşsa boş vektör döndür
    }
        vector<int> vec;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
        int size=q.size();

        for(int i=0;i<size;i++)
        {
            TreeNode* temp=q.front();
            q.pop();
            if(i=size-1)
                vec.push_back(temp->val);

            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            
        }
    }
        return vec;
    }

void bfs(TreeNode* node)
{
    queue<TreeNode*> q;
    q.push(node);
    while(!q.empty())
    {
        TreeNode* temp=q.front();
        cout<<q.front()->val;
        q.pop();
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
}
int main()
{
    // Construct a sample binary tree:
    //       1
    //      / \
    //     2   3
    //    / \   \
    //   4   5   6
    //  /
    // 7

    TreeNode* node7 = new TreeNode(7);
    TreeNode* node4 = new TreeNode(4, node7, nullptr);
    TreeNode* node5 = new TreeNode(5);
    TreeNode* node6 = new TreeNode(6);
    TreeNode* node2 = new TreeNode(2, node4, node5);
    TreeNode* node3 = new TreeNode(3, nullptr, node6);
    TreeNode* root = new TreeNode(1, node2, node3);

    // Call the rightSideView function
    vector<int> result = rightSideView_bruteforce(root);

    // Print the result (expected: [1, 3, 6, 7] if your function were implemented)
     cout << "Right Side View of the tree: [";
     for (size_t i = 0; i < result.size(); ++i) {
         cout << result[i];
         if (i < result.size() - 1) {
             cout << ", ";
         }
     }
     cout << "]" << endl;

    // You can also test your 'bfs' function here if you wish
     cout << "BFS traversal: ";
   //  bfs(root); // Expected output: 1234567
     cout << endl;

    // Clean up memory (optional, but good practice)
    delete root; // Note: For a proper tree deletion, you'd need a recursive function
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    delete node6;
    delete node7;

    return 0;
}