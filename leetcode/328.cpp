
#include <bits/stdc++.h>
using namespace std;
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode* node1=new ListNode(head->val);
        ListNode* temp2=node1;
        ListNode* temp3=node1;
        ListNode* node2=new ListNode(head->next->val);
        ListNode* temp4=node2;
        ListNode* temp=head->next->next;
        bool sira=1;
        while(temp!=NULL)
        {
            if(sira)
            {
            node1->next=new ListNode(temp->val);
            node1=node1->next;
            sira=0;
            }
            else{
                node2->next=new ListNode(temp->val);
                node2=node2->next;
                sira=1;
            }
            temp=temp->next;
        }
        
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp4;
        return temp3;
    }

    int main() {
    // Linked list'i oluşturalım: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Çözüm sınıfının bir örneğini oluşturalım
 
    
    // oddEvenList fonksiyonunu çağıralım
    ListNode* newHead = oddEvenList(head);

    // Sonucu ekrana yazdıralım
    ListNode* current = newHead;
    while (current != nullptr) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;

    // Belleği serbest bırakalım (LeetCode ortamında bu gerekli değildir, ama iyi bir pratiktir)
    current = newHead;
    while (current != nullptr) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}