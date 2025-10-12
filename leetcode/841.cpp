#include <bits/stdc++.h>
using namespace std;

bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(),false);
        stack<int> stk;
        stk.push(0);
        while(!stk.empty())
        {
            int room_num=stk.top();
            stk.pop();
            for(int key: rooms[room_num])
            {
                if(!visited[key])
                {
                    visited[key]=1;
                    stk.push(key);
                }
            }
        }
        vector<bool> check(rooms.size(),true);
        return check==visited;
    }