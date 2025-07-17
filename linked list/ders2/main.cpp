#include <iostream>
#include <cmath>
using namespace std;
struct node {
    int data;
    struct node* next;
};
struct node* head=NULL;
void basa_ekle(int key){
    struct node* eleman= new node();
    eleman->data=key;
    if(head==0)
    {
        head=eleman;
        head->next=head;
        
    }
    else{
        if(head->next==head)
        {
            head->next=eleman;
            eleman->next=head;
            head=eleman;
        }
        else
        {
            struct node* temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=eleman;
            eleman->next=head;
            head=eleman;
        }
    }
}
void sona_ekle(int key){
    struct node* eleman= new node();
    eleman->data=key;
    if(head==0)
    {
        head=eleman;
        head->next=head;
        
    }
    else{
        if(head->next==head)
        {
            head->next=eleman;
            eleman->next=head;
            
        }
        else
        {
            struct node* temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=eleman;
            eleman->next=head;
        }
    }
}
void display_list() {
    if (head == NULL) {
        cout << "Liste boş." << endl;
        return;
    }
    struct node* temp = head;
    cout << "Dairesel Bağlı Liste: ";
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << " (başa geri)" << endl;
}

void eleman_ekle(int key,int aranankey){
struct node* eleman= new node();
    eleman->data=key;
    if(head==0)
    {
        head=eleman;
        head->next=head;
        
    }
    else{
        if(head->next==head)
        {
            head->next=eleman;
            eleman->next=head;
            head=eleman;
        }
        else
        {
            struct node* temp=head;
            while(temp->data!=aranankey)
            {
                temp=temp->next;
            }
            struct node* yenidugum=new node();
            yenidugum->next=temp->next;
            temp->next=yenidugum;
            yenidugum->data=key;

        }
    }
}
void bastansil(){
    if(head==0)
    {
        cout<<"silinecek eleman yok"; 
    }
    else{
        if(head->next==head)
        {
            delete head;
        }
        else
        {
            struct node*temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            struct node*temp2=head;
            head=head->next;
            temp->next=head;
            delete temp2;
        }
    }
}



int main() {
    // basa_ekle'yi test et
    cout << "basa_ekle test ediliyor:" << endl;
    basa_ekle(10);
    display_list(); // Beklenen: 10 -> (başa geri)
    basa_ekle(20);
    display_list(); // Beklenen: 20 -> 10 -> (başa geri)
    basa_ekle(30);
    display_list(); // Beklenen: 30 -> 20 -> 10 -> (başa geri)

    cout << "\nsona_ekle test ediliyor:" << endl;
    head = NULL; // Yeni testler için head'i sıfırla
    sona_ekle(100);
    display_list(); // Beklenen: 100 -> (başa geri)
    sona_ekle(200);
    display_list(); // Beklenen: 100 -> 200 -> (başa geri)
    eleman_ekle(48,200);
    sona_ekle(300);
    display_list();
    bastansil();
    display_list(); // Beklenen: 100 -> 200 -> 300 -> (başa geri)

    return 0;
}








