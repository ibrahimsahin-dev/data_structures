#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        stack<int> stk;
        bool is_enter=0;
        stk.push(asteroids[0]);
        int deneme=0;
        for(int i =1; i<asteroids.size();i++)
        {
        if(asteroids[i]<0 && stk.top()>0)
        while(asteroids[i]<0 && stk.top()>0)
        {
            if(abs(asteroids[i])==abs(stk.top()))
            {
                is_enter=0;
                stk.pop();
                break;
            }
            else if(abs(asteroids[i])<abs(stk.top()))
            {
                is_enter=0;
                break;
            }
            else{
                is_enter=1;
                stk.pop();
                if(stk.empty())
                {
                    stk.push(asteroids[i]);
                    break;
                }
            }
            deneme=i;
        }
        else
        {
            stk.push(asteroids[i]);
        }
        }
        if(is_enter)
            stk.push(asteroids[deneme]);
        while(!stk.empty())
        {
            res.push_back(stk.top());
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }

