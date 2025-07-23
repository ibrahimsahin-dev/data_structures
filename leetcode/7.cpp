#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;
#define INT_max  2147483647
#define INT_min -2147483649

int reverse(int x) {
    bool ispositif=1;
   
    string s;
    int sayi=x;
    if(sayi<0){sayi*=-1; ispositif=0;}
    bool ok=1;
    while(sayi>0 && ok){
        if(sayi%10==0){
            sayi=sayi/10;
        }
        else{
            ok=0;
        }
    }
    while(sayi>0){
        
        s += to_string(sayi % 10);
        sayi=sayi/10;
    }
    int top=0;
    
    int size=s.length();
    int i=0;
    while(i<s.length()){
        
        if(i==s.length()-1){top += (s[i] - '0'); break;}
        top += (s[i] - '0') * pow(10, size - 1);               /// buraya -48 yazdik poatladi
        i++;
        size--;

        
        if(top>INT_max){
        return 0;
    }
    if(!ispositif){
        if(-top<INT_min){
            return 0;
        }
    }
    }
    
    if(!ispositif){return -top;}
    return top;

    }
    int main(){
        cout<<reverse(1534236469);
    }