#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int myAtoi(string s) {
        int i=0;
        bool isthereNegative=0;
        int top=0;
        
        while(s[i]<48 || s[i]>57)
        {
            if(s[i]=='-')
                isthereNegative=1;
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
        {
            return 0;
        }
            i++;
            if(i==s.length())
                return 0;
        }
        if(s[i]==0 && (s[i]>=48 && s[i]<=57)){
            i++;
        }
        while(s[i]!='\0' && (s[i]>=48 && s[i]<=57))
        {
            top=top*10;
            top+=s[i]-48;
            if(i==s.length()){
                if(isthereNegative)
                {
                    return -top;
                }
                else
                    return top;
            }
            i++;
        }
        
        if(isthereNegative)
        {
            top*=-1;
        }
         return top;       
    }
int main()
{
    cout<<myAtoi("   -042");
}