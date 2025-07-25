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
bool isSameTree(TreeNode* p, TreeNode* q) {
    stack<TreeNode*> s1;
    stack<TreeNode*> s2;
    TreeNode* curr1=p;
    TreeNode* curr2=q;
    
    while((curr1!=NULL || !s1.empty()) && (curr2!=NULL|| !s2.empty()))
{
        while(curr1 && curr2){
            if(curr1->val!=curr2->val){return false;}
            s1.push(curr1); s2.push(curr2);
            curr1=curr1->left; curr2=curr2->left;
        }
        if ((curr1 == nullptr) != (curr2 == nullptr)) return false;
        curr1=s1.top(); s1.pop();
        curr2=s2.top(); s2.pop();
        if(curr1->val!=curr2->val){return false;}
        curr1=curr1->right;
        curr2=curr2->right;

}
    return curr1 == nullptr && curr2 == nullptr && s1.empty() && s2.empty();

    }


  bool ok;
void recursivesol(TreeNode* p, TreeNode* q)
{
    if((p==NULL && q!=NULL) ||(p!=NULL && q==NULL) )
    {
        ok=0;
            return;
        }
    if(p==NULL && q==NULL){
        return;
    }
    if(p->val!=q->val)
    {
        ok=0;
    }
    recursivesol(p->left, q->left);
    recursivesol(p->right, q->right);
}

bool isSameTree2(TreeNode* p, TreeNode* q) {
     ok = true;
    recursivesol(p,q);
    return ok;
}










































    int main() {
    // Test Durumu 1: Aynı Ağaçlar
    cout << "Test Durumu 1: Ayni Agaclar" << endl;
    TreeNode* p1 = new TreeNode(1);
    p1->left = new TreeNode(2);
    p1->right = new TreeNode(3);

    TreeNode* q1 = new TreeNode(1);
    q1->left = new TreeNode(2);
    q1->right = new TreeNode(3);

    cout << "p1 ve q1 ayni mi? " << (isSameTree2(p1, q1) ? "Evet" : "Hayir") << endl; // Beklenen: Evet

    // Bellek temizliği
    delete p1->left;
    delete p1->right;
    delete p1;
    delete q1->left;
    delete q1->right;
    delete q1;

    cout << "---" << endl;

    // Test Durumu 2: Farklı Değerlere Sahip Ağaçlar
    cout << "Test Durumu 2: Farkli Degerlere Sahip Agaclar" << endl;
    TreeNode* p2 = new TreeNode(1);
    p2->left = new TreeNode(2);
    p2->right = new TreeNode(3);

    TreeNode* q2 = new TreeNode(1);
    q2->left = new TreeNode(5); // Farklı değer
    q2->right = new TreeNode(3);

    cout << "p2 ve q2 ayni mi? " << (isSameTree2(p2, q2) ? "Evet" : "Hayir") << endl; // Beklenen: Hayir

    // Bellek temizliği
    delete p2->left;
    delete p2->right;
    delete p2;
    delete q2->left;
    delete q2->right;
    delete q2;

    cout << "---" << endl;

    // Test Durumu 3: Farklı Yapıya Sahip Ağaçlar (Birinde dal eksik)
    cout << "Test Durumu 3: Farkli Yapiya Sahip Agaclar (Birinde dal eksik)" << endl;
    TreeNode* p3 = new TreeNode(1);
    p3->left = new TreeNode(2);

    TreeNode* q3 = new TreeNode(1);
    q3->left = new TreeNode(2);
    q3->right = new TreeNode(3); // q3'te fazladan dal var

    cout << "p3 ve q3 ayni mi? " << (isSameTree2(p3, q3) ? "Evet" : "Hayir") << endl; // Beklenen: Hayir

    // Bellek temizliği
    delete p3->left;
    delete p3;
    delete q3->left;
    delete q3->right;
    delete q3;

    cout << "---" << endl;

    // Test Durumu 4: Sadece Kök Düğüm, Değerler Farklı
    cout << "Test Durumu 4: Sadece Kok Dugum, Degerler Farkli" << endl;
    TreeNode* p4 = new TreeNode(1);
    TreeNode* q4 = new TreeNode(2);

    cout << "p4 ve q4 ayni mi? " << (isSameTree2(p4, q4) ? "Evet" : "Hayir") << endl; // Beklenen: Hayir

    // Bellek temizliği
    delete p4;
    delete q4;

    cout << "---" << endl;

    // Test Durumu 5: Her İkisi de Boş (nullptr)
    cout << "Test Durumu 5: Her Ikisi de Bos" << endl;
    TreeNode* p5 = nullptr;
    TreeNode* q5 = nullptr;

    cout << "p5 ve q5 ayni mi? " << (isSameTree2(p5, q5) ? "Evet" : "Hayir") << endl; // Beklenen: Evet

    cout << "---" << endl;

    // Test Durumu 6: Biri Boş, Diğeri Değil
    cout << "Test Durumu 6: Biri Bos, Digeri Degil" << endl;
    TreeNode* p6 = new TreeNode(1);
    TreeNode* q6 = nullptr;

    cout << "p6 ve q6 ayni mi? " << (isSameTree2(p6, q6) ? "Evet" : "Hayir") << endl; // Beklenen: Hayir

    // Bellek temizliği
    delete p6;

    return 0;
}