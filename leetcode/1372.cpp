#include "myhead.h"

int counter=0;
bool leftiszero=0;
void dfs(TreeNode* node)
    {
        if(node==nullptr)
            return;
        if(leftiszero==0)
        {

            if(node->left!=NULL)
            {
                leftiszero=1;
                counter++;
                cout<<"solda c++"<<counter;
                node=node->left;
                dfs(node);
            }
            
        }
        else
        {
            
            if(node->right!=NULL)
            {
                leftiszero=0;
                counter++;
                cout<<"sagda c++"<<counter;
                node=node->right;
                dfs(node);
            }
            
        }
    }
    int maxcount=0;
    void dfs2(TreeNode* node)
    {
        if(node==NULL)
            return;
        TreeNode* root=node;
        counter=0;
        leftiszero=0;
        dfs(root);
        int countleft=counter;
        leftiszero=1;
        counter=0;
        dfs(root);
        
        int countright=counter;
        if(countleft>countright)
        {
            if(maxcount<countleft)
            {
                maxcount=countleft;
            }
        }
        else{
            if(maxcount<countright)
            {
                maxcount=countright;
            }
        }
        dfs2(root->left);
        dfs2(root->right);

        
    }
    int longestZigZag_bruteforce(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
        {
            return 0;
        }
        dfs2(root);
        return maxcount;
    }
    
    


    void deleteTree(TreeNode* node) {
    if (node == nullptr) {
        return;
    }
    deleteTree(node->left);
    deleteTree(node->right);
    delete node;
}


int main() {
    // Kendi test senaryon için bu ağacı değiştirebilirsin.
    // Örnek Ağaç:
    //        1
    //         \
    //          2
    //         / \
    //        3   4
    //           /
    //          5
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(4);
    root->right->right->left = new TreeNode(5);

    // Solution sınıfından bir nesne oluşturuluyor
   

    // Fonksiyon çağrılıyor ve sonuç alınıyor
    int result = longestZigZag_bruteforce(root);

    // Sonuç ekrana yazdırılıyor
    std::cout << "Kodunun buldugu en uzun ZigZag yolu: " << result << std::endl;

    // Belleği temizle
    deleteTree(root);

    return 0;
}