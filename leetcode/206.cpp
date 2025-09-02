
#include <bits/stdc++.h>
using namespace std;
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* reverseList(ListNode* head) {
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