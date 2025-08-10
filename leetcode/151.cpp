#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <string.h>
using namespace std;

// Input: s = "the sky is blue"
// Output: "blue is sky the"
string reverseWords(string s) {
        string str="";
        int i=s.length()-1;
        int sonterim=-1;
        while(i>=0)
        {
            if(i==0 && s[0]!=' ')
            {
                str+=s[0];
                break;
            }
            if(s[i]==' ')
            {
                i--;
                continue;
            }
            else{
                if(sonterim==-1)
                {
                    sonterim=i;
                }
                if(i==1)
                {
                    if(s[i-1]==' ')
                    {
                    string st2=s.substr(1,sonterim+1);
                    str+=st2;
                    i=-1;
                    }
                    else{
                    string st2=s.substr(0,sonterim+1);
                    str+=st2;
                    i=-1;
                    }
                    
                }
                else{
                    if(s[i-1]==' ')
                    {
                        string st2=s.substr(i,sonterim-i+1);
                        str+=st2;
                        if(str[str.length()-1]!=' ')
                            str+=' ';
                        sonterim=-1;
                    }
                    i--;
                }
            }
        }
        if(str[str.length()-1]==' ')
            return str.substr(0,str.length()-1);
        return str;
    }
    int main()
    {
        string x ="a good   example";
        cout<<reverseWords(x);
    }