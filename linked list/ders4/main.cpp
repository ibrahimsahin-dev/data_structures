#include <iostream>
#include <cmath>
using namespace std;

struct node{
    int data;
    struct node*next;
    struct node* prev;
};
struct node* head=NULL;
void basaekle(int key)
{
    struct node * eleman= new node();
    eleman->data=key;
   if(head==0){
    head=eleman;
   }
   
   else{
    eleman->next=head;
    head->prev=eleman;
    head=eleman;
   }
}
void yazdir(){
    struct node *temp=head;
    if(head!=0){
        while(temp->next!=0){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
    else{
        cout<<"liste bos";
    }
}
void ekle(int index, int key){
    struct node * eleman= new node();
    eleman->data=key;
    int i =index-3;
    struct node*temp=head;
    while(i>0)
    {
        temp=temp->next;
        i--;
    }
    eleman->prev=temp;
    eleman->next=temp->next;
    temp->next->prev=eleman;
    temp->next=eleman;

    


}



int main()
{
    basaekle(3);
    basaekle(5);
    basaekle(7);
    ekle(3,100);
    basaekle(7);

    yazdir();
}