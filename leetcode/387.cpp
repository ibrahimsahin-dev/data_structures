#include <bits/stdc++.h>
using namespace std;

   int firstUniqChar_bruteforce(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=1;
            }
            else{
                mp[s[i]]++;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            int x=mp[s[i]];
            if(x==1)
                return i;
        }
        return -1;
    }
