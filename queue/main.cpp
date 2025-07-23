#include <iostream>
using namespace std;
#define SIZE 10

struct queue{
    int data[SIZE];
    int cnt;
    int front;
    int rear;
};
void initialize(struct queue* qu){
    qu->cnt=0;
    qu->front=0;
    qu->rear=-1;
}
void enqueue(queue* q, int key){
    if(q->cnt==SIZE){
        cout<< "queue is full";
    }
    else
    {
        q->rear++;
        if(q->rear==SIZE)
        {
            q->rear=0;
        }
        q->data[q->rear]=key;
        q->cnt++;
    }
}
void dequeue(queue* q){
    if(q->cnt==0){
        cout<< "queue is empty";
    }
    else
    {
        q->front++;
        if(q->front==SIZE)
        {
            q->front=0;
        }
        
        q->cnt--;
    }
}

int main()
{


}