
#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> diff(2);
        unordered_set<int> set1;
        unordered_set<int> set2;
        for(int i: nums1)
        {
            if(set1.find(i)==set1.end())
            {
                set1.insert(i);
            }
        }
        for(int i: nums2)
        {
            if(set2.find(i)==set2.end())
            {
                set2.insert(i);
            }
        }
        for(auto it: set1)
        {
            if(set2.find(it)==set2.end())
            {
                diff[0].push_back(it);
            }
        }
        for(auto it: set2)
        {
            if(set1.find(it)==set1.end())
            {
                diff[1].push_back(it);
            }
        }
        return diff;
    }