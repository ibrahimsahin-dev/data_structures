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
            return NULL;
        ListNode* temp=head;
        while(temp->next!=NULL && temp->next->next!=NULL)
        {
            struct ListNode* icdongu=new ListNode();
            icdongu=temp->next->next;

        }


    }

int main() {
    // Örnek bağlı liste: 1 -> 2 -> 3 -> 4
    ListNode* node4 = new ListNode(4);
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
