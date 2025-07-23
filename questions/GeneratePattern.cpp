#include <iostream>
#include <queue>
#include <random>
#include <stdlib.h>
using namespace std;


string GeneratePattern(int length){
    srand(time(0));
    if(length%2!=0){return NULL;}
    string dizi="()";
    string str;
    int len=length;
    bool ok=0;

    while(str.length()!=len/2){
        char choice=dizi[rand()%2];
        if(choice==')' && ok==1) // ((()  ()))    (())
        {
            str+=choice;
            ok=0;
        }
        else if(choice==')'){
            continue;
        }
        else{
            str+=choice;
            ok=1;
        }
    }
    int i= str.length();
    while(i<=len && len-i>=0){
        if(str[len-i]==')')
        {
            str+='(';
        }
        if(str[len-i]=='(')
        {
            str+=')';
        }
        i++;
    }
    return str;
}

int main(){
    cout<<GeneratePattern(8);
}