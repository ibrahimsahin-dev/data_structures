#include <iostream>
#include <vector>
#include <stack>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return head;
        ListNode* temp=head;
        if(temp==head)
        {
            ListNode* node1=new ListNode();
            ListNode* node2=new ListNode();
            node1->val=temp->val;
            node1->next=temp->next->next;
            
            node2->val=temp->next->val;
            node2->next=node1;
            head=node2;
            
            temp=node2->next;
        }
            while(temp && temp->next && temp->next->next)
            {
                ListNode* node1=new ListNode();
                ListNode* node2=new ListNode();
                
                node2->val=temp->next->val;
                node2->next=temp->next->next->next;
                node1->val=temp->next->next->val;
                node1->next=node2;
                
                
                temp->next=node1;
                temp=node2->next;

            }
        
        return head;

    }

int main() {
    // Örnek bağlı liste: 1 -> 2 -> 3 -> 4
    ListNode* node5 = new ListNode(5);
    ListNode* node4 = new ListNode(4, node5);
    ListNode* node3 = new ListNode(3, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* node1 = new ListNode(1, node2);

    // Swap işlemi
    ListNode* newHead = swapPairs(node1);

    // Listeyi yazdır
    ListNode* temp = newHead;
    while(temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
