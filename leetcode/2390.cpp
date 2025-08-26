string str;
       stack<char> sta;
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='*')
           {
               sta.pop();
               
           }
           else{
           sta.push(s[i]);
           }
       }
       while(!(sta.empty()))
       {
           str+=sta.top();
           sta.pop();
       }
       reverse(str.begin(),str.end());
       return str;    