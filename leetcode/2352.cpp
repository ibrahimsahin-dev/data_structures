#include <bits/stdc++.h>
using namespace std;
int equalPairs_bruteforce(vector<vector<int>>& grid) {
        int res=0;
        unordered_map<int,vector<int>> map1;
        unordered_map<int,vector<int>> map2;
        vector<int> vec2;
        for(int i=0;i<grid.size();i++)
        {
            map1[i]=grid[i];
            
            for(int j=0;j<grid.size();j++)
            {
                vec2.push_back(grid[j][i]);
            }
            map2[i]=vec2;
            vec2.clear();
        }
        for(auto it:map1)
        {
            for(auto bt:map2)
            {
             if(it.second==bt.second)
                res++;   
            }
        }
        return res;
    }