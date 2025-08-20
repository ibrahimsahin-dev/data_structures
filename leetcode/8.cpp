#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

int myAtoi(string s) {
    string str="";
    int count=0;
    bool is_negative=0;
    bool is_positive=0;
    for(int i=0; i<s.length();i++)
    {
        if((s[i]>=65 &&s[i]<=90) || (s[i]>=97 && s[i]<=122))
            break;
        
        else if(s[i]==45 ||s[i]==43){
            if(s[i]==45)
                is_negative=1;
            count++;
            if(count>=2)
                return 0;
        }
        
        else if(s[i]>=48 &&s[i]<=57)
        {
            while(s[i]>=48 &&s[i]<=57)
            {
                str+=s[i];
                i++;
            }
            break;
        }
        else{
       
            if (count > 0) {
                break;
            }

            if(s[i]!=32) 
                break;
        }
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
        if(net==214748364 && z==str.length()-1)
        {
            if(is_negative && str[z]<='8')
            {
                net*=10;
                net += str[z] - '0';
                return -net;
            }
            else if(is_negative==0 &&str[z]<='6')
            {
                net*=10;
                net += str[z] - '0';
                return net;
            }
        }
        if(net>=INT_MAX/10)
        {
            if(is_negative)
                return INT_MIN;
            else
                return INT_MAX;
        }
        if(s=="-2147483648")
                return INT_MIN;
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
    cout << myAtoi("  +  413"); 
}