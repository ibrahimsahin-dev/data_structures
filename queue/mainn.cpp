#include <iostream>
using namespace std;
#define SIZE 10

struct node{
    int data;
    struct node* next;
};
struct queue{
    struct node* front=NULL;
    struct node* rear=NULL;
    int cnt=0;
};
void enqueue(struct queue* q, int key){
    node* eleman=new node();
    eleman->data=key;
    if(q->cnt==SIZE){cout<< "queue is full";}
    else{
        if(q->cnt==1){
            eleman=q->rear=q->front;
        }
        else{
            eleman->next=q->rear;
            q->rear=eleman;
            q->cnt++;
        }
    }
}
void dequeue(struct queue* q){
    if(q->cnt==0){
        cout<<"there is no element to remove";
    }
    else{
        struct node* temp=q->rear;
        while(temp->next!=q->front){
            temp=temp->next;
        }
        delete q->front;
        q->front=temp;
        q->cnt--;
        

    }
}