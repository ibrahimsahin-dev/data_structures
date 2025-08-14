#include <iostream>
#include <vector>
#include <stack>
using namespace std;
 int myAtoi(string s) {
        string str="";
        bool is_negative=0;
       for(int i=0; i<s.length();i++)
       {
        if((s[i]>=65 &&s[i]<=90) || (s[i]>=97 && s[i]<=122))
            break;
        else if(s[i]>=45)
            is_negative=1;
        else if(s[i]>=48 &&s[i]<=57)
        {
            str+=s[i];
        }
        cout<<str;    
       }   
       int z=0;
        while(z<str.length())
        {
            if(str[z]==0){
                z++;
            }
            else
                break;
        }
        int net=0;
        
        while(z<str.length())
        {
            net*=10;
            net += str[z] - '0';
            z++;
        }
        if(is_negative)
            return -net;
        else
            return net;
    
    
    }
int main()
{
    cout<<myAtoi("   -042");
}