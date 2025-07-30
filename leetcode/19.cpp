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

  ListNode* removeNthFromEnd(ListNode* head, int n) {

    ListNode* temp=head;
    int i=0;
    while(temp)
    {
        temp=temp->next;
        i++;
    }
    ListNode* temp2=head;
    while(i-n>0)
    {
        temp2=temp2->next;
        i--;
    }
    ListNode * temp3=temp2->next;
    temp2->next=temp3->next;
    delete temp3;
    return head;  
    }