#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision_bruteforce(vector<int>& asteroids) {
        vector<int> res;
        stack<int> stk;
        
        stk.push(asteroids[0]);
        
        for(int i =1; i<asteroids.size();i++)
        {
            if(stk.empty())
            {
                stk.push(asteroids[i]);
                continue;
            }
            if(stk.top()>0 && asteroids[i]<0)
            {
                if(abs(stk.top())>abs(asteroids[i]))
                {
                    continue;
                }
                else if(abs(stk.top())==abs(asteroids[i]))
                {
                    stk.pop();
                    continue;
                }
                else{
                    stk.pop();
                    if(stk.top()>0 && asteroids[i]<0)
                {
                    while(abs(stk.top())<abs(asteroids[i]))
                    {
                          
                        if(abs(stk.top())>abs(asteroids[i]))
                        {
                            
                            break;
                        }
                        else if(abs(stk.top())==abs(asteroids[i]))
                        {
                            stk.pop();
                            break;
                        }
                        else{
                            stk.top();
                            if(stk.empty())
                            {
                                break;
                            } 
                        }
                    }
                }
                else
                     stk.push(asteroids[i]);
                }
                
            }
            else
                stk.push(asteroids[i]);
       
        }
        
        while(!stk.empty())
        {
            res.push_back(stk.top());
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }

vector<int> asteroidCollision(vector<int>& asteroids)
{
    vector<int> res;
    stack<int> stk;
    for(int i: asteroids)
    {
        
    }

    while(!stk.empty())
        {
            res.push_back(stk.top());
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
}
