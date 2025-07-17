#include <iostream>
using namespace std;
#define SIZE 10
struct node{
    int data;
    struct node* next;
};

struct stack{
    struct node* top=NULL;
    int cnt=0;
};
stack stk;
void push(stack* stk, int key) {
    if (stk->cnt == SIZE) {
        cout << "stack is full\n";
    } else {
        struct node* temp = new node();
        temp->data = key;
        temp->next = stk->top;
        stk->top = temp;  // Fixed: Assign new node to top
        stk->cnt++;
    }
}
void pop(stack*stk){
    if(stk->cnt==0){
        cout<< "stack is empty";
    }
    else{
        struct node* temp=stk->top;
        stk->top=stk->top->next;
        delete temp;
        stk->cnt--;
    }
}
void show_top(struct stack* stk){
    if(stk->cnt==0){
        cout<< "stack is empty"<<endl;
    }
    else{
        cout<<stk->top->data;
    }
}
int main() {
    stack stk;

    // Push elements
    push(&stk, 10);
    push(&stk, 20);
    push(&stk, 30);

    // Show top element
    show_top(&stk);  // Output: 30

    // Pop elements
    pop(&stk);
    show_top(&stk);  // Output: 20

    pop(&stk);
    show_top(&stk);  // Output: 10

    pop(&stk);
    show_top(&stk);  // Output: stack is empty

    // Try popping from empty stack
    pop(&stk);  // Output: stack is empty

    // Fill the stack to test SIZE limit
    for (int i = 0; i < SIZE + 2; i++) {
        push(&stk, i);
    }  // Output: stack is full (when i = 10 and 11)

    return 0;
}