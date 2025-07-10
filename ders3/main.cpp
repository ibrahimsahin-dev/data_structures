#include <iostream>
#include <cmath>
using namespace std;
struct node{
    int id;
    string ad;
    string soyad;
    string adres;
    string urun;
    int ucret;
    struct node* next;
};
struct node* head;
void verial(struct node* temp){
    int id;
    string ad;
    string soyad;
    string adres;
    string urun;
    int ucret;
    cout<<"musteri numarasini giriniz: ";
    cin>>id;
    cout<<"musteri adini giriniz: ";
    cin>>ad;
    cout<<"musteri soyad giriniz: ";
    cin>>soyad;
    cout<<"musteri adres giriniz: ";
    cin>>adres;
    cout<<"musteri urun giriniz: ";
    cin>>urun;
    cout<<"musteri ucret giriniz: ";
    cin>>ucret;
    temp->ad=ad;
    temp->id=id;
    temp->soyad=soyad;
    temp->adres=adres;
    temp->urun=urun;
    temp->ucret=ucret;
}
void kayit(){
    if(head==0){
        struct node* temp=new node();
        verial(temp);
        head=temp;
        head->next=head;
        cout<<temp->id<<" id li kullanici kaydi basa yapildi";
    }
    else{
        if(head->next==head)
        {
            struct node*temp = new node();
            verial(temp);
            temp->next=head;
            head->next=temp;
            cout<<temp->id<<" id li kullanici kaydi yapildi";
        }
        else{
            struct node* temp=head;
            while(temp->next!=head)
                temp=temp->next;
            struct node* temp2=new node();
            verial(temp2);
            temp2->next=head;
            temp->next=temp2;
            cout<<temp2->id<<" id li kullanici kaydi yapildi";
        }
    }
}
void kayitsil(int key)
{
    if(head==0){
        cout<<"silinecek kayit yok"<<endl;
    }
    else{
        if(head->next==head)
        {
            if(head->id==key){
                delete head;
                head = nullptr;
                cout<< key << " id li tek kayit silindi"<<endl;
            }
        }
        else{
            struct node* temp;
            struct node*temp2;
            while(temp->next->id!=key)
                temp=temp->next;
            temp2=temp->next->next;
            delete temp->next;
            temp=temp2;
            cout<< key << " id li tek kayit silindi"<<endl;
        }
    }
}
void kayitlarigoster()
{
   struct node* temp = head;
do {
    cout<<"musteri id: "<<temp->id<<endl;
    cout<<"musteri ad: "<<temp->ad<<endl;
    cout<<"musteri soyad: "<<temp->soyad<<endl;
    cout<<"musteri adres: "<<temp->adres<<endl;
    cout<<"musteri urun: "<<temp->urun<<endl;
    cout<<"musteri ucret: "<<temp->ucret<<endl;
    temp = temp->next;
} while(temp != head);
}
int main() {
    int choice;
    int idToDelete;

    do {
        cout << "\n--- Musteri Yonetim Sistemi ---" << endl;
        cout << "1. Yeni Kayit Ekle" << endl;
        cout << "2. Kayit Sil" << endl;
        cout << "3. Tum Kayitlari Goster" << endl;
        cout << "0. Cikis" << endl;
        cout << "Seciminizi yapin: ";
        cin >> choice;

        switch (choice) {
            case 1:
                kayit();
                break;
            case 2:
                cout << "Silmek istediginiz musterinin ID'sini girin: ";
                cin >> idToDelete;
                kayitsil(idToDelete);
                break;
            case 3:
                kayitlarigoster();
                break;
            case 0:
                cout << "Programdan cikiliyor..." << endl;
                break;
            default:
                cout << "Gecersiz secim. Lutfen tekrar deneyin." << endl;
        }
    } while (choice != 0);

    // Clean up memory before exiting
    if (head != nullptr) {
        struct node* current = head->next;
        while (current != head) {
            struct node* temp = current;
            current = current->next;
            delete temp;
        }
        delete head;
        head = nullptr;
    }

    return 0;
}