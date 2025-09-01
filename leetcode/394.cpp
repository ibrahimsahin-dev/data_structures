#include <bits/stdc++.h>
using namespace std;
string donbana(string s)
{
    int net=0;
    int i=0;
    while(s[i]>='0' && s[i]<='9')
    {
        net*=10;
        net+=s[i]-'0';
        i++;
    }
    i--;
    string substr=s.substr(i+1,s.length()-i);
    string res="";
   i=0;
   while(i<net)
   {
    res+=substr;
    i++;
   }
   return res;
}

string decodeString_bruteforce(string s) {
        stack<char> stk;
        string res="";
        for(int i=0; i<s.length();i++)
        {
            if(stk.empty())
            {
                stk.push(s[i]);
                continue;
            }
            if(s[i]==']')
            {
                int last=i;
                i--;
                string str ="";
                //3[a]2[bc]
                while(stk.top()!='[')
                {
                    str+=stk.top();
                    stk.pop();
                }
                i--;
                stk.pop();
                while(stk.top()>='0' && stk.top()<='9')
                {
                    str+=stk.top();
                    stk.pop();
                }
                
                reverse(str.begin(),str.end());
                string x = donbana(str);
                for(int j=0;j<x.length();j++)
                {
                    stk.push(x[j]);
                }
                i=last;
            }
            else{
                stk.push(s[i]);

            }
        }
        while(!stk.empty())
        {
            res+=stk.top();
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;  
    }

int main(){
    cout<<endl<<decodeString_bruteforce("31[a]");
}