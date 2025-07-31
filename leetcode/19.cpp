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
    if (i == n) {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }
    ListNode* temp2=head;
    while(i-n-1>0)
    {
        temp2=temp2->next;
        i--;
    }
    ListNode * temp3=temp2->next;
    temp2->next=temp3->next;
    delete temp3;
    return head;  
    }

    // Vektörden liste oluşturan basit bir yardımcı fonksiyon
ListNode* createList(const std::vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* current = head;
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new ListNode(values[i]);
        current = current->next;
    }
    return head;
}

// Listeyi ekrana yazdıran basit bir yardımcı fonksiyon
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}


// --- İSTEDİĞİN BASİT MAIN FONKSİYONU ---
int main() {
    // 1. Test verisini hazırla
    std::vector<int> values = {1, 2, 3, 4, 5};
    int n_degeri = 2;
    ListNode* benim_listem = createList(values);

    // 2. Orijinal listeyi göster
    std::cout << "Orijinal Liste: ";
    printList(benim_listem);

    // 3. Senin fonksiyonunu çağır
    benim_listem = removeNthFromEnd(benim_listem, n_degeri);

    // 4. Sonucu göster
    std::cout << "Sonuc:          ";
    printList(benim_listem);

    return 0;
}