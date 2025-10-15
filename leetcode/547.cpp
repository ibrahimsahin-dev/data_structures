#include <bits/stdc++.h>
using namespace std;
int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> visited(isConnected.size(),false);
        int res=0;
        int N=isConnected.size();
        for(int i=0;i<N;i++)
        {
            if(!visited[i])
            {
                res++;
             dfs(i,isConnected,visited);
            }
        }
        return res;
        
    }
    void dfs(int m,vector<vector<int>>& isConnected, vector<bool>&visited  )
    {
        visited[m]=1;
       int N=isConnected.size();
       for(int i=0;i<N;i++)
       {
            if(isConnected[m][i]==1 && !visited[i])
            {
                dfs(i,isConnected,visited);
            }
       } 
    }
