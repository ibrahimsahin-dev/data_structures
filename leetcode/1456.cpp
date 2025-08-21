#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int maxVowels(string s, int k) {
        
    int totalvowel=0;
    for(int i=0;i<k;i++)
    {
        if(is_vowel(s[i]))
            totalvowel++;
    }
    int lastvowel=totalvowel;
    for(int i=1;i<s.length()+1-k;i++)
    {
        if(is_vowel(s[i+k-1]))
            lastvowel++;
        if(is_vowel(s[i-1]))
            lastvowel--;
        if(lastvowel>totalvowel)
            totalvowel=lastvowel;
    }
    return totalvowel;






    /*string str="";
        int vowels_count=0;
        for(int i=0;i<k;i++)
        {
            str+=s[i];
        }
        for(char c:str)
        {
            if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u')
                vowels_count++;
        }
        string currentstr=str;
        for(int i=1;i<s.length()-k+1;i++)
        {
            currentstr=str.substr(1,k-1);
            currentstr+=s[i+k-1];
            str=currentstr;
            int temp=0;
            for(char c:currentstr)
                {
                    if(c=='a' || c=='e'|| c=='i'|| c=='o'|| c=='u')
                        temp++;
                }
            if(temp>vowels_count)
                vowels_count=temp;
        }
        return vowels_count;*/
    }

int main()
{
    string s="abciiidef";
    cout<<maxVowels(s,3);
}