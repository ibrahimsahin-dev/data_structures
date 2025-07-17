#include <iostream>
using namespace std;
#define SIZE 10
struct node{
    int id;
    string ad;
    string soyad;
    struct node* next;
};
struct stack{
    int cnt=0;
    struct node* top;
};
void addstudent(struct stack *stk){
    int id;
    string ad;
    string soyad;
    struct node*temp = new node();
    if(stk->cnt==10)
    {
        cout<<"stack is full, student can't be added.";
    }
    else{
        if(stk->cnt==0){
            //getting information from user
            cout<<"input student id: ";
            cin>>id;
            cout<<"input student ad: ";
            cin>>ad;
            cout<<"input student soyad: ";
            cin>>soyad;
            temp->ad=ad;
            temp->id=id,
            temp->soyad=soyad;
            temp->next=NULL;
            stk->top=temp;
            stk->cnt++;
        }
        else{
            cout<<"input student id: ";
            cin>>id;
            cout<<"input student ad: ";
            cin>>ad;
            cout<<"input student soyad: ";
            cin>>soyad;
            temp->ad=ad;
            temp->id=id,
            temp->soyad=soyad;
            temp->next=stk->top;
            stk->top=temp;
        }
    }
}