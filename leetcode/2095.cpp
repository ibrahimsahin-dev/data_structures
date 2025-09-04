
#include <bits/stdc++.h>
using namespace std;
  struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

class Solution {
public:
    ListNode* deleteMiddle_bruteforce(ListNode* head) {
        if(head->next==NULL)
        {
            return NULL;
        }
        ListNode* temp=head;
        int i=1;
        while(temp->next!=NULL)
        {
            i++;
            temp=temp->next;
        }
        int mid=i/2;
        mid--;
        temp=head;
        for(int i=0;i<mid;i++)
        {
            temp=temp->next;
        }
        ListNode* temp2=temp->next;
        temp->next=temp->next->next;
        delete temp2;
    }
};

ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL || head==NULL)
        {
            return NULL;
        }
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=NULL;
        while(fast!=NULL)
        {
            prev=slow;
            fast=fast->next->next;
            slow=slow->next;
        }
        prev->next=slow->next;
        return head;
    }