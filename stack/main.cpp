#include <iostream>
using namespace std;

#define SIZE 10
 // like a battery
 struct stack{
    int data[SIZE];
    int top=-1;
 };

stack stk;
void push(int key) //adding element to stack
{
if(stk.top==SIZE-1){
    cout<<"stack is full";
}
else{
    stk.top++;
    stk.data[stk.top]=key;
    cout<<key<<" added to stack";
}
}

void pop() //remove elemnent
{
    if(stk.top==-1){
        cout<<"No element in stack";
    }
    else{
        stk.top--;
    }
}

void reset()// clear stack
{
    stk.top=-1;
}

void print()
{

}

int main()
{



    return 0;
}