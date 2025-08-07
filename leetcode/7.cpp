#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
using namespace std;


int reverse_bruteforce(int x) {
   
    while(x%10==0)
    {
        x/=10;
    }
    bool is_negative=0;
    if(x<0)
    {
        is_negative=1;
        x*=-1;
    }
    string str=to_string(x);
    int i=0;
    int lastIndex=str.length()-1;
    while(i<str.length()/2)
    {
        char temp;
        temp=str[i];
        str[i]=str[lastIndex];
        str[lastIndex]=temp;
        i++;
        lastIndex--;
    }
    int net=0;
    i=0;
    while(i<str.length())
    {
        net*=10;
        net+=str[i]-48;
        i++;
        if(is_negative)
        {
            net*=-1;
            if(net<=INT_MIN)
                return 0;
            net*=-1;
        }
        else{
        if(net>=INT_MAX)
            return 0;
        }

    }
    if(is_negative)
    {
        return -net;
    }
    else
        return net;
}

    int main(){
       
 cout << reverse_bruteforce(123) << endl;  

    }