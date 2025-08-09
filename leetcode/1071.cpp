#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
using namespace std;
string gcdOfStrings(string str1, string str2) {
    string manstr=str2;
        int i=str2.length()-1;
        int j=str1.length()-1;
        int k=0;
        int l=0;
        int m=0;
        bool out=1;
        while(out)
        {
            while(str2[l])
            {
                m=0;
                if(m==j)
                {
                    manstr=str2;
                    out=0;
                    break;
                }
                if(str1[m]==str2[l])
                {
                    m++;
                    l++;
                    if(l==i)
                        l==0;
                }
                else{
                    out=1;
                    break;
                }
                
                
            }
            //str2 manipule et 
        }

    }