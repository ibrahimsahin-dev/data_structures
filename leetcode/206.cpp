
#include <bits/stdc++.h>
using namespace std;
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* reverseList_bruteforce(ListNode* head) {
       stack<int> stk;
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            stk.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            temp->val=stk.top();
            temp=temp->next;
            stk.pop();
        }
        return head;

    }
    
  ListNode* reverseList(ListNode* head) {
        ListNode* ref=NULL;
        ListNode* curr=head;

        while(curr!=NULL)
        {
            ListNode*temp =curr->next;
            curr->next=ref;
            ref=curr;
            curr=temp;                
        }
        return ref;


    }
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        std::cout << temp->val << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    std::cout << "Original list: ";
    printList(head);

    // Reverse the list
    ListNode* newHead = reverseList(head);

    std::cout << "Reversed list: ";
    printList(newHead);

    // Clean up allocated memory
    while (newHead != NULL) {
        ListNode* temp = newHead;
        newHead = newHead->next;
        delete temp;
    }

    return 0;
}