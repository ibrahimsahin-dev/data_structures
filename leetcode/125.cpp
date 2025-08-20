#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=90)
                s[i]+=32;
            if(s[i]>=97 && s[i]<=122)
            {
                str+=s[i];
            }
            if(s[i]>='0' && s[i]<='9')
                str+=s[i];
        }
        if(str=="")
            return true;
        if(str.length()%2==1)
        {
            
            int size=str.length()-1;
            for(int i=0;i<str.length()/2;i++,size--)
            {
                if(str[i]!=str[size])
                    return false;
            }
        }
        else{
            int size=str.length()-1;
            for(int i=0;i<=str.length()/2;i++,size--)
            {
                if(str[i]!=str[size])
                    return false;
            }
        }
        return true;
    }