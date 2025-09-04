
#include <bits/stdc++.h>
using namespace std;
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  int pairSum(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow= head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* prev=NULL;
        fast=head;
        while(slow)
        {
            ListNode* temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        int maxsum=0;
        while(prev)
        {
            maxsum=max(maxsum,(prev->val+fast->val));
            prev=prev->next;
            fast=fast->next;
        }
        return maxsum;
    }