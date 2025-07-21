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
        struct ListNode* mynode= new ListNode();
        mynode=head;
        struct ListNode* temp=head;
        if(head==NULL){ return temp;}
        else{
            if(head->next==NULL){
                return mynode;
            }
            else{
                while(temp){
                    if(temp->next==NULL){
                        if(temp->val==head->val){
                            delete temp;
                            head->next=NULL;
                        }
                        return mynode;
                    }
                    if(temp->val==temp->next->val){
                        if(temp->next->next){
                        struct ListNode* temp3=temp->next->next;
                        delete temp->next;
                        temp->next=temp3;}
                        else{
                            delete temp->next;
                        }
                    }
                    temp=temp->next;
                }
                return mynode; 
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
