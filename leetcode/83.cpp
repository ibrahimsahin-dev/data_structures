#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;


  
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


 ListNode* deleteDuplicates(ListNode* head) {
        
        struct ListNode* temp=head;
        if(head==NULL){ return temp;}
        else{
            if(head->next==NULL){
                return temp;
            }
            else{
                while(temp && temp->next){
                   if(temp->val==temp->next->val){
                    struct ListNode* temp3= temp->next;
                    temp->next=temp->next->next;
                    delete temp3;
                   }
                   else{
                    temp=temp->next;
                   }
                }
                return head; 
            }
            
        }
 }
int main() {
    // Bağlı listeyi oluştur
    ListNode* eleman = new ListNode(1);
    eleman->next = new ListNode(1);
    eleman->next->next = new ListNode(1);


    // Fonksiyonu çağır
    ListNode* sonuc = deleteDuplicates(eleman);

    // Sonucu yazdır
    ListNode* temp = sonuc;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}
