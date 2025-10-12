#include <bits/stdc++.h>
using namespace std;

// Input: isConnected = [[1,1,0],[1,1,0],[0,0,1]]
// Output: 2
int findCircleNum(vector<vector<int>>& isConnected) {
        stack<int> stk;
        stk.push(0);
        vector<bool> visited(isConnected.size(),false);
        visited[0]=1;
        int counter=0;
        while(!stk.empty())
        {
            int node=stk.top();
            stk.pop();
            for(int i: isConnected[node])
            {
                
            }
        }
    }