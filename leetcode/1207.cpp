
#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences_bruteforce(vector<int>& arr) {
       unordered_map<int,int> map;
       for(int i: arr)
       {
            map[i]++;
       }
       unordered_set<int> set;
       for(auto it: map)
       {
        set.insert(it.second);
       }
       return set.size() == map.size();
    }