#include <iostream>
#include <vector>
#include <stack>
using namespace std;


//s = "babad"        "bab"
//Input: s = "cbbd"     Output: "bb"


string turn_sub(string s, int left, int right)
{
    while(left>=0 && right<s.length())
    {
        if(s[left]==s[right])
        {
            left--;
            right++;
        }
        else{
            break;
        }
    }
    string str;
    str=s.substr(left+1,right);
    return str;
}
string longestPalindrome(string s) {

    int i=0;
    string str=turn_sub(s,0,0);
    while(i+1<s.length()){
        if(s[i]==s[i+1]){
            string str2=turn_sub(s,i,i+1);
            if(str2.length()>str.length()){
                str=str2;
            }
        }
        string str2=turn_sub(s,i,i);
        if(str2.length()>str.length()){
            str=str2;
        }
        i++;
    }
    string str2=turn_sub(s,i,i);
    if(str2.length()>str.length()){
        str=str2;
    }
    return str;

}



int main(){
    string s="babab";
    cout<<longestPalindrome(s);
}