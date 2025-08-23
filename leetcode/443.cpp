#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int compress(vector<char>& chars) {
        int freq_numbers=0;
        int chindex=0;
        vector<char> ch(chars.size());
        for(int i=0;i<chars.size()-1;i++)
        {
            if(chars[i]==chars[i+1])
            {
                freq_numbers+=1;
            }
            else{
                ch.insert(ch.begin()+chindex,chars[i]);
                chindex+=1;
                if(freq_numbers!=0)
                {
                    freq_numbers+=1;
                    string str = to_string(freq_numbers);
                for(char c: str)
                {
                    ch.insert(ch.begin()+chindex,c);
                    chindex+=1;
                }
            }
                freq_numbers=0;
            }
        }

          ch.insert(ch.begin()+chindex,chars[chars.size()-1]);
        chindex+=1;
        if(freq_numbers!=0)
        {
            freq_numbers+=1;
            string str = to_string(freq_numbers);
            for(char c: str)
            {
                ch.insert(ch.begin()+chindex,c);
                chindex+=1;
            }
        }


        for(int i=ch.size()-1;i>=0;i--)
        {
            if(ch[i]==0)
                ch.pop_back();
        }
        chars=ch;
        return ch.size();
    }
    int main()
    {
        vector<char> x={'a','a','b','b'};
        cout<<compress(x);
    }