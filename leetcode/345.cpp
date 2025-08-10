#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;
bool is_vovel(char x)
{
    if(x==65 || x==69 ||x==73 ||x==79 ||x==85 || x-32==65 || x-32==69 ||x-32==73 ||x-32==79 ||x-32==85 )
        return true;
    return false;
}
string reverseVowels(string s) {
    int i=0;
    int j=s.length()-1;
    char ch1;
    char ch2;
    while(i<j)
    {
        if(is_vovel(s[i])){}
        else
            i++;
        if(is_vovel(s[j])){}
        else{
            j--;
        }
        if(is_vovel(s[i])&&is_vovel(s[j]))
        {
            char swap=s[i];
            s[i]=s[j];
            s[j]=swap;
            i++;
            j--;
        }
    }    
    return s;
    }
    int main()
    {
        string s="IceCreAm";
        cout<<reverseVowels(s);
    }