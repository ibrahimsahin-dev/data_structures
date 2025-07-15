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


int turnlen(struct ListNode* l1){
    struct ListNode* temp=l1;
    int i=1;
    while(temp->next!=0)
    {
        temp=temp->next;
        i++;
    }
    return i;
}
void sonaekle(struct ListNode* l1, int key){
    
    if(l1==0){
        struct ListNode* temp= new ListNode(key);
    }
    else{
        struct ListNode* temp=l1;
        while(temp->next!=0){
            temp=temp->next;
        }
        struct ListNode* temp2= new ListNode(key);
        temp2=temp->next;
    }
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* don= new ListNode();
    int l1len=turnlen(l1);
    int l2len=turnlen(l2);
     while(l1len>0 || l2len>0){
        int carry=0;
        if(l1len>l2len){
                while(l1len>l2len)
                {
                    struct ListNode* temp=l1;
                    while(l1len>1){
                        temp=temp->next;
                    }
                    sonaekle(don,temp->val);
                    l1len--;
                }
        }
        else if(l1len<l2len)
        {
            while(l2len>l1len)
                {
                    struct ListNode* temp=l2;
                    while(l2len>1){
                        temp=temp->next;
                    }
                    sonaekle(don,temp->val);
                    l2len--;
                }
         }
         while(l1len==l2len && l1len>1)
         {
            
            struct ListNode* temp1=l1;
            struct ListNode* temp2=l2;
            while(l1len>1){
                temp1=temp1->next;
            }
            while(l2len>1){
                temp2=temp2->next;
            }
            
            if((carry+temp1->val+temp2->val)>10){
                carry=1;
                sonaekle(don,(carry+temp1->val+temp2->val)%10);
            }
            else{
                sonaekle(don,(carry+temp1->val+temp2->val)%10);
            }


            l1len--;
            l2len--;

                
         }
     }

    return don;
};
