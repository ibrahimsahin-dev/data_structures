#include <iostream>
#include <cmath>
using namespace std;
struct node{

    int data=55;
    struct node* next;
};
struct node* sona_ekle(int key, struct node* head)
{   
    if(head==0)
    {
        struct node * temp= new node();
        temp->data=key;
        temp->next=0;
        head=temp;
        return head;
    }
    else
    { 
        struct node* temp = head;

        while(temp->next!=0)
        {
            temp=temp->next;
        }
        struct node * don = new node();
        don->data=key;
        temp->next = don;
        
        return head;

    }


};
void print_nodes_keys(struct node * point)
{
    struct node* temp= point;
    
    while(temp!=0)
    {cout<<temp->data<<endl;
        temp=temp->next;
    }
}
struct node* basa_ekle(int data, struct node* head)
{   
    if(head==0)
    {
        struct node * temp= new node();
        temp->data=data;
        temp->next=0;
        head=temp;
        return head;
    }
    else
    { 
        struct node * temp= new node();
        temp->data=data;
        temp->next=head;
        head=temp;
        return head;

    }
};
int sum_keys(struct node* head)

{
    int sum=0;
    struct node* temp=head;
    while(temp!=0)
    {
        sum+=temp->data;
        temp=temp->next;
    }
    return sum;
    
}
void find_key(struct node* head, int key)
{
    bool x=0;
    struct node* temp = head;
    while(temp!=0)
    {
        if(temp->data==key){
            x=1;
            break;
        }
        temp=temp->next;
    }
    if(x==1){
        cout<<"aranan sayi bulundu";
    }
    else
        cout<<"aranan sayi linked list icinde yok";

}
struct node* bastanSil(struct node* head)
{
    if(head == nullptr) {
        cout << "liste bos" << endl;
        return nullptr;
    }

    struct node* temp = head->next;
    delete head;
    return temp;
}
struct node* sondanSil(struct node* head){
    struct node * temp = head;
    while(temp->next->next!=0)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;

}

void tersine_cevir(struct node*head)
{
    struct node* temp=head;
    struct node* temp2;
    struct node* temp3;
    while(temp->next!=0)
    {
        temp3=temp->next;
        temp->next=temp;
        temp=temp3;
    }
        
}



int main(){
    struct node* head = new node();
    head->data = 55;
    head->next = nullptr;

    head = basa_ekle(12, head);
    head = sona_ekle(1332, head);

    print_nodes_keys(head);

    int x = sum_keys(head);
    cout << "toplam : " << x << endl;

    find_key(head, 12);
  
    print_nodes_keys(head);
  


}
