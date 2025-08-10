#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        
        int max=candies[0];
        for(int i:candies)
        {
            if(max<i)
                max=i;
        }
        for(int i =0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
                result.push_back(1);
            else
                result.push_back(0);
        }
    }