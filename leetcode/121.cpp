#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// Input: prices = [7,1,5,3,6,4]
// Output: 5
int maxProfit(vector<int>& prices) {
        int i=INT_MAX;
        int net=0;
        for(int x: prices)
        {
            if(x<i)
                i=x;
            else{
                if(x-i>net)
                    net=x-i;
            }
        }
        return net;
    }

