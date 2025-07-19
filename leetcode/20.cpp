#include <iostream>
#include <vector>
#include <stack>
using namespace std;
bool isValid(string s) 
{
      int i =0;
      int j=0;
      int size = s.length();
      stack<int> stack;
      if(size%2==1){
        return false;
      }

      for(char c : s)
      {
        if(c=='(' || c=='{' || c=='[')
        {
            stack.push(c);
        }
        else
        {
            if(stack.empty())
            { return false;}
            if(c==')' && stack.top()=='('){
                stack.pop();
            }
            if(c==']' && stack.top()=='['){
                stack.pop();
            }
            if(c=='}' && stack.top()=='{'){
                stack.pop();
            }
            else{return false;}
        }
      }
      if(stack.empty())
      { return true;}
      return false;    
}
int main()
{
    string s="(){}";
    cout<<isValid(s);
    
}
