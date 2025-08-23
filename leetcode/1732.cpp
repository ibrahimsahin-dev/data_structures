#include <iostream>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;
int largestAltitude(vector<int>& gain) {
        vector<int> x;
        x.push_back(0);
        for(int i=0;i<gain.size();i++)
        {
            x.push_back(x[i]+gain[i]);
        }
       auto maxit=max_element(x.begin(),x.end());
       return *maxit;
    }