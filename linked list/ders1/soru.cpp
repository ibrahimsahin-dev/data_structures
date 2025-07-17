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

class Solution {
public:
    char* elemanicevir(ListNode* l1)
    {
        char* x={};
        ListNode* temp=l1;
        while(temp!=0)
        {
            x+=temp->val;
            temp=temp->next;
        }
        return x;

    }
    int lenihesapla(char* dizi)
    {
        int i = 0;
        int sayi=0;
        while(dizi[i]!=NULL)
        {
            sayi+=1;
            i++;
        }
        return sayi;
    }
    int sayiyidon(char* dizi)
    {
        int donulecek_sayi;
        int basamak=lenihesapla(dizi);
        int i=lenihesapla(dizi);
        int j= 1;
        while(i>=1)
        {   
            donulecek_sayi+=dizi[i-1]*pow(10,j);
            i--;
            j++;

        }
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        char* eleman1=elemanicevir(l1);
        char* eleman2=elemanicevir(l2);
        int sayi1=sayiyidon(eleman1);
        int sayi2=sayiyidon(eleman2);
        int sayi3=sayi1+sayi2;
        


    
    }
    
};