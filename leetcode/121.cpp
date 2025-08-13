#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// Input: prices = [7,1,5,3,6,4]
// Output: 5
int maxProfit(vector<int>& prices) {
        int i=prices[0];
        int j=prices[0];
        for(int price: prices)
        {
            if(price<i)
                i=price;
        }
    }