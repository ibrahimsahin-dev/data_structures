
#include <bits/stdc++.h>
using namespace std;
bool closeStrings_bruteforce(string word1, string word2) {
     unordered_map<char,int> my_map;
     unordered_map<char,int> my_map2;
     vector<int> vec1;
     vector<int> vec2;
    if(word1.length()!=word2.length())
        return false;
     for(int i=0;i<word1.length();i++)
     {
        my_map[word1[i]]++;
        my_map2[word2[i]]++;
     }
    for(auto it: my_map)
    {
        if(my_map2.find(it.first)==my_map2.end())
            return false;
        vec1.push_back(it.second);
    }
    for(auto it: my_map2)
    {
        if(my_map.find(it.first)==my_map.end())
            return false;
        vec2.push_back(it.second);
    }
    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
    return vec1==vec2;
}

int main() {
    // Test durumlarını burada deneyebilirsin.
    string word1_test1 = "cabbba";
    string word2_test1 = "abbccc";
    cout << "Test 1: " << word1_test1 << " ve " << word2_test1 << " -> " 
         << (closeStrings(word1_test1, word2_test1) ? "True" : "False") << endl;

    string word1_test2 = "abc";
    string word2_test2 = "bca";
    cout << "Test 2: " << word1_test2 << " ve " << word2_test2 << " -> " 
         << (closeStrings(word1_test2, word2_test2) ? "True" : "False") << endl;

    string word1_test3 = "a";
    string word2_test3 = "aa";
    cout << "Test 3: " << word1_test3 << " ve " << word2_test3 << " -> " 
         << (closeStrings(word1_test3, word2_test3) ? "True" : "False") << endl;
         
    string word1_test4 = "cbb";
    string word2_test4 = "acc";
    cout << "Test 4: " << word1_test4 << " ve " << word2_test4 << " -> " 
         << (closeStrings(word1_test4, word2_test4) ? "True" : "False") << endl;

    return 0;
}