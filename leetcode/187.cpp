#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <unordered_set>
using namespace std;

// Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
// Output: ["AAAAACCCCC","CCCCCAAAAA"]
//we got time limit exceeded
vector<string> findRepeatedDnaSequences_bruteforce(string s) {
        vector<string> x;
        vector<string> temp;
        string str="";
        for(int i=0;i<10;i++)
        {
            str+=s[i];
        }
        int left_index=0;
        temp.push_back(str);
        string tempstr=str;
        for(int i=10;i<s.length();i++)
        {
            tempstr=tempstr.substr(1,10);
            tempstr+=s[i];
            int count=0;
            for(string c: temp)
            {
                if(c==tempstr)
                    count++;
            }
            if(count<3)
            {
                temp.push_back(tempstr);
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            for(int j=0;j<temp.size();j++)
            {
                if(temp[i]==temp[j])
                    x.push_back(temp[j]);
            }
        }
        return x;
        
    }


vector<string> findRepeatedDnaSequences(string s) {
       unordered_set<string> first;
       unordered_set<string> repeated;
       if (s.length() < 10) {
        return {};
    }
       for(int i=0;i<s.length()-10;i++)
       {
        string temp=s.substr(i,10);
        if(first.count(temp)==0)
        {
            first.insert(temp);
        }
        else
            repeated.insert(temp);
       }
         
        return vector<string>(repeated.begin(),repeated.end());
    }