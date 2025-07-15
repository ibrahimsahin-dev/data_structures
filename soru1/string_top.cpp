#include <iostream>
using namespace std;
#include "string.h"
#include <algorithm>

long int lens(string s)
{
    long int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}
int stringtonum(string s){
    if(s[0]!=45){
    int slen=lens(s)-1;
    
    long long int don=0;
    long long int carpan=1;
    while(slen>=0){

        don+=(s[slen]-48)*carpan;
        // cout<<slen<<"\t"<<s[slen];
        carpan*=10;
        slen--;
    }
    return don;}
    else{
        int slen=lens(s)-1;
        long long int don=0;
        int carpan=1;
        while(slen>0){

            don+=(s[slen]-48)*carpan;
            // cout<<slen<<"\t"<<s[slen];
            carpan*=10;
            slen--;
        }
        return -don;
    }
}
 long  int string_top(string s1, string s2)
 {
    long  int a=stringtonum(s1);
    long int b=stringtonum(s2);
    return  (a+b);
 }


string only_string(string s1, string s2) {
    int s1len = s1.length() - 1;
    int s2len = s2.length() - 1;
    string s3;
    int carry = 0;

    while (s1len >= 0 || s2len >= 0 || carry > 0) {
        int digit1 = (s1len >= 0) ? s1[s1len] - '0' : 0;
        int digit2 = (s2len >= 0) ? s2[s2len] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        s3.push_back((sum % 10) + '0');
        carry = sum / 10;

        s1len--;
        s2len--;
    }

    reverse(s3.begin(), s3.end());
    return s3;
}





int main(){


    string x="12";
    string y="2";
    string z=only_string(x,y);
    cout<<z;

  
    return 0;
}