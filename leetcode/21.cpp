#include <iostream>
#include <vector>
#include <stack>
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* top;
        while(temp2)
        {
            temp1->next=temp2;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        top=temp1;
      


    }






  int main(){

  }
