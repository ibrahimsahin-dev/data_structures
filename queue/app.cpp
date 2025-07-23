#include <iostream>
using namespace std;
#define SIZE 100

struct node{
    int data=0;
    struct node* next;
};
struct stack{
    int cnt=0;
    struct node* top;
};
struct queue{
    int cnt=0;
    struct node* front;
    struct node* rear;
    
};

void spush(stack* stk, int key){
    node* eleman= new node();
    eleman->data=key;
    if(stk->cnt==0){
        eleman->next=NULL;
        eleman=stk->top;
        stk->cnt++;
    }
    else{
        eleman->next=stk->top;
        stk->top=eleman;
        stk->cnt++;
    }
}
void qpush(queue* q, int key){
    node* eleman= new node();
    eleman->data=key;
    if(q->cnt==0){
        eleman->next=NULL;
        eleman= q->rear = q->front;
        q->cnt++;
        
    }
    else{
        node* temp=q->rear;
        
    }
}

