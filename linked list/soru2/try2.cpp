#include <iostream>
#include <cmath>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* result= new ListNode();
        struct ListNode* temp=result;
        int carry=0;
        while(l1 || l2 || carry==1){
            int sum=carry;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            carry = sum / 10; 
            sum = sum % 10;
            
            temp->next=new ListNode(sum);
            temp=temp->next;
        }
        return result->next;
    }