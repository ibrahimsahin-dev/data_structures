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

 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* temp1 = list1;
    ListNode* temp2 = list2;

    ListNode* top = new ListNode();
    ListNode* adres = top;

    while(temp1 && temp2)
    {
        if(temp1->val >= temp2->val)
        {
            ListNode* tempx = new ListNode(temp2->val);
            cout << temp2->val << " deger temp2'den alindi\n";
            adres->next = tempx;
            adres = adres->next;
            temp2 = temp2->next;
        }
        else
        {
            ListNode* tempx = new ListNode(temp1->val);
            cout << temp1->val << " deger temp1'den alindi\n";
            adres->next = tempx;
            adres = adres->next;
            temp1 = temp1->next;
        }
    }

    while(temp1)
    {
        ListNode* tempx = new ListNode(temp1->val);
        cout << temp1->val << " (kalan) temp1'den alindi\n";
        adres->next = tempx;
        adres = adres->next;
        temp1 = temp1->next;
    }

    while(temp2)
    {
        ListNode* tempx = new ListNode(temp2->val);
        cout << temp2->val << " (kalan) temp2'den alindi\n";
        adres->next = tempx;
        adres = adres->next;
        temp2 = temp2->next;
    }

    return top->next;
}



int main() {
  
    ListNode* list1 = new ListNode(1, new ListNode(2, new ListNode(4)));

    ListNode* list2 = new ListNode(1, new ListNode(3, new ListNode(4)));

    ListNode* merged = mergeTwoLists(list1, list2);
   
    while (merged) {
        std::cout << merged->val << " ";
        merged = merged->next;
    }
    return 0;
}