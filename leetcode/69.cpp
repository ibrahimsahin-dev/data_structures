#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int mySqrt(int x) {
        //2 4 5 6 7 8
        //3    9 10 11 12 13 14 15 
        if(x==0){ return 0;}
        int i =1;
        while(i<x){
            if(x>=2147395600 && x <=2147483647
)  {return 46340;}
            if(i*i<=x && (i+1)*(i+1)>x){
                break;
            }
            i++;
        }
        return i;
    }
int main(){
    cout<< mySqrt(16);
}