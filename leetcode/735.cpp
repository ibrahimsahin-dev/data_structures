vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        stack<int> stk;
        stk.push(asteroids[0]);
        for(int i =1; i<asteroids.size();i++)
        {
        
        while(asteroids[i]<0 && stk.top()>0)
        {
            if(abs(asteroids[i])==abs(stk.top()))
            {
                stk.pop();
                break;
            }
            else if(abs(asteroids[i])<abs(stk.top()))
            {
                break;
            }
            else{
                stk.pop();
                if(stk.empty())
                {
                    stk.push(asteroids[i]);
                    break;
                    
                    }
            }
        }
            stk.push(asteroids[i]);
        
        }
        stk.pop();
        while(!stk.empty())
        {
            res.push_back(stk.top());
            stk.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }   